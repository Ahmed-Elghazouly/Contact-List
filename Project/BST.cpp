//
//  BST.cpp
//  contactListProj
//
//  Created by angie elsegeiny on 27/11/2023.
//

#include "BST.h"
#include "ContactList.h"
#include <iostream>
#include <iomanip>
using namespace std;

// BST Class implementation

// Definition of constructor
BST::BST() : myRoot(nullptr) {}

// Definition of empty()
bool BST::empty() const {
    return myRoot == nullptr;
}


// Definition of inorder() and inorderAux() recursive function
void BST::inorder(ostream& out) const {
    inorderAux(out, myRoot);
}


void BST::inorderAux(ostream& out, BinNodePointer subtreeRoot) const {
    if (subtreeRoot != nullptr) {
        inorderAux(out, subtreeRoot->left);     // L operation
        out << subtreeRoot->data.getName() << " ";        // N operation
        inorderAux(out, subtreeRoot->right);    // R operation
    }
}


// Definition of graph() and graphAux()
void BST::graph(ostream& out) const {
    graphAux(out, 0, myRoot);
}


void BST::graphAux(ostream& out, int indent, BinNodePointer subtreeRoot) const {
    if (subtreeRoot != nullptr) {
        graphAux(out, indent + 8, subtreeRoot->right);
        out << setw(indent) << " " << subtreeRoot->data.getName() << endl;
        graphAux(out, indent + 8, subtreeRoot->left);
    }
}



// Definition of search()
ContactList BST::search(string& name) const {
    //return searchAux(myRoot, name);
    BinNodePointer locptr = myRoot;
    bool found = false;

    while (!found && locptr != nullptr) {
        if (name < locptr->data.getName()) // descend left
            locptr = locptr->left;
        else if (locptr->data.getName() < name) // descend right
            locptr = locptr->right;
        else // item found
          //  found = true;
            return locptr->data;
    }
}



bool BST::searchAux(BinNodePointer& subtreeRoot, string& name) {
    if (subtreeRoot == 0) {     //empty tree
        return false;
    }
    else {
        if (name < subtreeRoot->data.getName()) {
            return searchAux(subtreeRoot->left, name);
        }
        else if (name > subtreeRoot->data.getName()) {
            return searchAux(subtreeRoot->right, name);
        }
        else {
            return true;

        }
    }
}


// Definition of insert() and insertAux()
void BST::insert(ContactList& contact) {
    insertAux(myRoot, contact.getName());
}


void BST::insertAux(BinNodePointer& subtreeRoot, const string& name) const
{
    if (subtreeRoot == nullptr) {// empty tree 
        ContactList c;
        c.setName(name);
        subtreeRoot = new BinNode(c);
    }
    else if (name < subtreeRoot->data.getName()) // left subtree
        insertAux(subtreeRoot->left, name);
    else if (subtreeRoot->data.getName() < name) // right subtree
        insertAux(subtreeRoot->right, name);
    else
        cerr << "Item already in the tree\n";
}


// Definition of remove()
bool BST::remove(string& name) {
    bool found;     // signals if item is found
    BinNodePointer x, parent;       //x points to node to be deleted, parent of x and xSucc
    search2(name, found, x, parent);

    if (!found) {
        cerr << "Item not in the BST\n";
        return false;
    }

    // if node has 2children
    if (x->left != nullptr && x->right != nullptr) {
        BinNodePointer xSucc = x->right;
        parent = x;
        while (xSucc->left != nullptr) {
            parent = xSucc;
            xSucc = xSucc->left;
        }

        // Move contents of xSucc to x and change x
        // to point to successor, which will be removed.
        x->data.getName() = xSucc->data.getName();
        x = xSucc;
    }

    // if node has 0 or 1 children
    BinNodePointer subtree = x->left;
    if (subtree == 0)
        subtree = x->right;
    else if (parent == 0)
        myRoot = subtree;
    else if (parent->left == x)
        parent->left = subtree;
    else
        parent->right = subtree;
    delete x;
    return true;

}



void BST::search2(string& name, bool& found, BinNodePointer& locptr, BinNodePointer& parent) const {
    locptr = myRoot;
    parent = nullptr;
    found = false;

    while (!found && locptr != nullptr) {
        if (name < locptr->data.getName()) {
            parent = locptr;
            locptr = locptr->left;
        }
        else if (locptr->data.getName() < name) {
            parent = locptr;
            locptr = locptr->right;
        }
        else {
            found = true;
        }
    }
}



ostream& operator<< (ostream& out, const BST& aList) {
    aList.graph(out);
    return out;
}


void BST::edit(string& name) {

    //find if bst is empty
    if (empty()) {
        cerr << "No contacts available";
        return;
    }
    //find for contact with name input
    if (search(name).empty()) {
        cerr << "This contact is not avaiable.";
        return;
    }
    else {
        ContactList c = search(name);   //copy object found

        //change attribute in object according to user input 
        string field, fname, lname, compName, eml, addr, fbL, igL, lnkdL, pNum;
        cout << "Please enter the field you want to change: ";
        cin >> field;

        if (field == "first name") {
            cout << "Enter first name to change: ";
            cin >> fname;
            c.setName(fname);

        }
        else if (field == "last name") {
            cout << "Enter last name to change: ";
            cin >> lname;
            c.setName(lname);
        }
        else if (field == "phone number") {
            cout << "Enter phone number to change: ";
            cin >> pNum;
            c.setPhoneNumber(pNum);
        }
        else if (field == "company") {
            cout << "Enter company name to change: ";
            cin >> compName;
            c.setCompanyName(compName);
        }
        else if (field == "email") {
            cout << "Enter email to change: ";
            cin >> eml;
            c.setEmail(eml);
        }
        else {
            cout << "This field is not avaiable.";
        }
    }


}

