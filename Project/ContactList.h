//
//  ContactList.hpp
//  contactListProj
//
//  Created by angie elsegeiny on 07/12/2023.
//

#ifndef ContactList_h
#define ContactList_h

#include <iostream>
using namespace std;



class ContactList
{

    //*** DATA MEMBERS ***//
private:
    string Name;
    string companyName;
    string phoneNumber;
    string email;
    //*** FUNCTION MEMBERS ***//

public:

    ContactList();
    /*--------------------------------------------------------------------------
         Default constructor: creates an empty contact

         Precondition:  None
         Postcondition: An empty contact has been constructed.
     --------------------------------------------------------------------------*/

    ~ContactList();
    /*--------------------------------------------------------------------------
          Destructor: destroys a  contact

         Precondition:  None
         Postcondition: An contact has been detleted.
     --------------------------------------------------------------------------*/

    bool empty() const;
    /*-----------------------------------------------------------------------------
         Checks if contact is empty or not

         Precondition:  None
         Postcondition: true is returned if this contact is empty, false otherwise.
     -----------------------------------------------------------------------------*/


     // Setters and getters for contact information
    void setName(const string& name);
    string getName() const;

    void setCompanyName(const string& company);
    string getCompanyName() const;

    void setPhoneNumber(const string pNumber);
    string getPhoneNumber() const;

    void setEmail(const string& eml);
    string getEmail() const;






};

#endif /* ContactList_hpp */

