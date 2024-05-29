//
//  User.cpp
//  contactListProj
//
//  Created by angie elsegeiny on 07/12/2023.
//

#include "User.h"
#include "BST.h"
#include "ContactList.h"
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <fstream>
#include <new>
#include <string>
#include<vector>
using namespace std;



void User::setBST() {

    vector<ContactList> contacts = getFromFile(); // Retrieve contacts once

    for (int i = 0; i < contacts.size(); i++) {
        bst.insert(contacts[i]); // Assuming bst is your Binary Search Tree
    }
};


BST& User::getBST() {
    return bst;
}


// Implementation of addToFile
void User::addToFile(const ContactList& cont) {
    ofstream file("Contacts.bin", ios::out | ios::app);
    if (file.is_open()) {
        file << cont.getName() << "Ž" << cont.getCompanyName() << "Ž"
            << cont.getPhoneNumber() << "Ž" << cont.getEmail() <<"\n";
        file.close();
        // cout << "Contact added to file successfully." << endl;
    }
    else {
        cout << "Error: Unable to open the file." << endl;
    }
}


// Implementation of getToFile
vector<ContactList> User::getFromFile() {

    ifstream file("contacts.bin", ios::in);

    //string holding the objects 
    // getline(file, s);
    string s((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
    string delimiter = "Ž";
    string ObjDelimiter = "\n";

    //int capacity = 10;
    //int size = 0;

    //ContactList* c = new ContactList[capacity];
    ContactList c;
    vector<ContactList> ConList;

    while (s!="") {
        /* if (size >= capacity) {
             capacity = size + 10;

             ContactList* temp = new ContactList[capacity];

             for (int i = 0; i < size; i++) {
                 temp[i] = c[i];
             }

             delete[] c;

             c = temp;
         }*/

         //change to name only  (use .getName())

         //Fname
        string fn = s.substr(0, s.find(delimiter));
        c.setName(fn);



        //CompanyName
        s.erase(0, s.find(delimiter) + delimiter.length());
        string company = s.substr(0, s.find(delimiter));
        c.setCompanyName(company);

        //PhoneNumber
        s.erase(0, s.find(delimiter) + delimiter.length());
        string num = s.substr(0, s.find(delimiter));
        //long pnum = stol(num);
        c.setPhoneNumber(num);



        //Email
        s.erase(0, s.find(delimiter) + delimiter.length());
        string eml = s.substr(0, s.find(delimiter));
        c.setEmail(eml);



        s.erase(0, s.find(ObjDelimiter) + ObjDelimiter.length());
        ConList.push_back(c);
    }
    file.close();
    return ConList;
}


//  Implementation of add function
void User::addContact(const string& name, const string& company, const string& pNumber,
    const string& eml) {
    ContactList c;
    try {
         //setBST();

        c.setName(name);
        c.setCompanyName(company);
        c.setPhoneNumber(pNumber);
        c.setEmail(eml);

        getBST().insert(c);

        addToFile(c);
    }
    catch (exception e) {
        cout << e.what();
    }
}



//implementation of edit function
void User::editContact(string name) {

    getFromFile();
    bst.edit(name);
    addToFile(bst.search(name));

}

ContactList User::searchContact(string name) {
    setBST();
    ContactList C;
    if (getBST().search(name).empty()) {
                cerr << "Contact is not avaiable.";
                return ContactList();
           }
    return getBST().search(name);

}
////implementation of search function
//ContactList User::searchContact(string name) {
//    //retrive all contacts that start with first word of string
//    setBST();
//
//    if (bst.search(name).empty()) {
//        cerr << "Contact is not avaiable.";
//        return ContactList();
//    }
//    ContactList c;
//    //split name into first name and first & last name
//    string firstName = name.substr(0, name.find(" ")); //returns first name
//    string fullName = name;//returns full name (first+last)
//
//
//    //pattern 1: user enters first name only;
//    regex reg1(firstName); //condition that name entered must be only the first name
//    bool regSearch1 = regex_match(name, reg1); //compare with name entered that it is only first name
//
//
//    //pattern 2: user enters first and last name
//    regex reg2(fullName); //condition that name entered must be the first name with last name
//    bool regSearch2 = regex_match(name, reg2); //compare with name entered that it is first and last name
//
//    if (regSearch1) {
//        cout << "Contact found" << endl;
//
//    }
//    else if (regSearch2) {
//        cout << "Contact found" << endl;
//    }
//    else {
//        cout << "Contact not found" << endl;
//    }
//    ContactList c;
//    return c;
//
////}



void User::removeContact(string& name) {

    if (!bst.remove(name)) {
        cerr << "Contact is not available.";
        return;
    }
    else {
        cout << "The contact has been removed successfully." << endl;
        return;
    }

}


