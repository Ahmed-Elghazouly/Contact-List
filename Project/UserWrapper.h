#pragma once
#include "User.h" // Include the header file with the User class
#include <string>
#include "ContactList.h" // Include the header file with ContactList class
#include <msclr/marshal_cppstd.h> // Include the header for marshaling
#using <mscorlib.dll>

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr::interop;
using namespace System;
using namespace System::Runtime::InteropServices;
using namespace System::Collections::Generic;
using namespace msclr::interop;


public ref class UserWrapper {
private:
    User* user; // Replace with your actual User class type

public:
    UserWrapper() {
        user = new User(); // Initialize your User class instance
    }

    ~UserWrapper() {
        delete user; // Clean up User class instance
    }

    void SetBST() {
        user->setBST();
    }

    //string* GetFromFile() {
    //    vector<ContactList> nativeContacts = user->getFromFile();
    //    string* s = nullptr;
    //    for (int i = 0; i >= nativeContacts.size(); i++) {
    //        s[i] = marshal_as<string>(nativeContacts.at(i).getName());
    //    }
    //    return s;

  
    ContactList SearchContact(String^ name) {
        string stdname = marshal_as<string>(name);
        return user->searchContact(stdname);
    }
    vector<string> GetFromFile() {
        vector<ContactList> nativeContacts = user->getFromFile();
        vector<string> s;

        for (const auto& contact : nativeContacts) {
            s.push_back(contact.getName()+"\n"+contact.getPhoneNumber()+"\n");
        }

        return s;
    }

    void AddContact(String^ Fname, String^ Lname, String^ company, String^ pNumber, String^ eml) {
        string stdName = marshal_as<string>(Fname) + " " + marshal_as<string>(Lname);
        string stdCompany = marshal_as<string>(company);
        string stpNumber = marshal_as<string>(pNumber);
        string stdEml = marshal_as<string>(eml);
        user->addContact(stdName, stdCompany, stpNumber, stdEml);
    }

    bool RemoveContact(String^ name) {
        try {
            string stdName = marshal_as<string>(name);

            // Call the removeContact function from your User class
            bool removed = true;
            user->removeContact(stdName);

            if (!removed) {
                Console::WriteLine("Contact is not available.");
            }
            else {
                Console::WriteLine("The contact has been removed successfully.");
            }
            return removed;

        }
        catch (const std::exception& e) {
            Console::WriteLine(gcnew String(e.what()));
            return false;
        }
    }
    // Add other wrapper methods for edit, search, remove, etc. as needed
};
