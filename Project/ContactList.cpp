//
//  ContactList.cpp
//  contactListProj
//
//  Created by angie elsegeiny on 07/12/2023.
//

#include "ContactList.h"
#include "BST.h"
#include <stdio.h>
#include <string.h>
#include <regex>
#include <fstream>
#include <new>
#include <string>
using namespace std;


ContactList::ContactList() {};

ContactList::~ContactList() {};

bool ContactList::empty() const {
    if (getName() == " ") {
        return true;
    }
}


// Implementation of setters and getters

void ContactList::setName(const string& name) {
    Name = name;
}

string ContactList::getName() const {
    return Name;
}

void ContactList::setCompanyName(const string& company) {
    companyName = company;
}

string ContactList::getCompanyName() const {
    return companyName;
}

void ContactList::setPhoneNumber(const string pNumber) {
    phoneNumber = pNumber;
}

string ContactList::getPhoneNumber() const {
    return phoneNumber;
}

void ContactList::setEmail(const string& eml) {
    email = eml;
}

string ContactList::getEmail() const {
    return email;
}





