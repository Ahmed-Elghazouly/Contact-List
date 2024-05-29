//
//  User.hpp
//  contactListProj
//
//  Created by angie elsegeiny on 07/12/2023.
//

#ifndef User_hpp
#define User_hpp

#pragma once
#include <iostream>
#include<vector>
#include "ContactList.h"
#include "BST.h"
using namespace std;

class User
{
private:
    static int count;

    BST bst;
    //bst object
public:
    //bst setter{
//            getfromfile() }

    void setBST();
    /*--------------------------------------------------------------------------
       Creates new contact

       Precondition:  None
       Postcondition: An new BST has been constructed.
   --------------------------------------------------------------------------*/
    BST& getBST();
    /*--------------------------------------------------------------------------
       Creates new contact

       Precondition:  None
       Postcondition: An new BST has been constructed.
   --------------------------------------------------------------------------*/
    void addContact(const string& name, const string& company, const string& pNumber,
        const string& eml);
    /*--------------------------------------------------------------------------
         Creates new contact

         Precondition:  None
         Postcondition: An new BST has been constructed.
     --------------------------------------------------------------------------*/

    void removeContact(string& name);
    /*--------------------------------------------------------------------------
         removes avaiable contact

         Precondition:  None
         Postcondition: A BST has been removed.
     --------------------------------------------------------------------------*/


    void editContact(string name);
    /*--------------------------------------------------------------------------
         Updates current contact

         Precondition:  None
         Postcondition: An updated BST.
     --------------------------------------------------------------------------*/

    void displayContacts() const;
    /*--------------------------------------------------------------------------
         displays all contacts

         Precondition:  None
         Postcondition: all contacts are listed in alphabetical order.
     --------------------------------------------------------------------------*/


    ContactList searchContact(string name);
    /*--------------------------------------------------------------------------
         searches for contact by name (full or first)

         Precondition:  None
         Postcondition: contact found is returned
     --------------------------------------------------------------------------*/



    void addToFile(const ContactList& cont);
    /*--------------------------------------------------------------------------
         Adds contact to a file

         Precondition:  None
         Postcondition: object of contact has been added to a file
     --------------------------------------------------------------------------*/


    vector<ContactList> getFromFile();
    /*--------------------------------------------------------------------------
         Retrivese contact from a file

         Precondition:  None
         Postcondition: object of contact has been retrieved from a file
     --------------------------------------------------------------------------*/



};

#endif /* User_hpp */

