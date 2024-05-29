//
//  BST.hpp
//  contactListProj
//
//  Created by angie elsegeiny on 27/11/2023.
//

#ifndef BST_hpp
#define BST_hpp

#include <stdio.h>
#include <iostream>
#include "ContactList.h"
using namespace std;
//typedef ContactList DataType;
//typedef ContactList obj;

class BST
{
private:
    /***** Node class *****/
    class BinNode
    {
    public:
        // obj contact;
        ContactList data;
        BinNode* left;
        BinNode* right;

        // *** BinNode constructors *** //

        // Default -- data part is default ContactList value; both links are null.
        BinNode() : left(0), right(0) {}

        // Explicit Value -- data part contains ContactList object; both links are null.
        BinNode(ContactList contact) : data(contact), left(0), right(0) {}
    };  // end of class BinNode declaration

    typedef BinNode* BinNodePointer;

public:

    /***** Function Members ****/

    BST();
    /*--------------------------------------------------------------------
         Default constructor: Construct a BST object.

         Precondition:  None
         Postcondition: An empty BST has been constructed.
    --------------------------------------------------------------------*/

    bool empty() const;
    /*-------------------------------------------------------------------------
         Check if this BST is empty.

         Precondition:  None.
         Postcondition: true is returned if this BST is empty, false otherwise.
    --------------------------------------------------------------------------*/

    void inorder(ostream& out) const;
    /*-------------------------------------------------------------------------
        Inorder traversal of BST.

        Precondition: ostream out is open.
        Postcondition: BST has been inorder traversed and values in nodes
        have been output to out.

        Note: inorder uses private auxiliary function inorderAux().
    --------------------------------------------------------------------------*/


    void graph(ostream& out) const;
    /*-------------------------------------------------------------------------
        Graphic output of BST.

        Precondition: ostream out is open.
        Postcondition: Graphical representation of BST has been output to out.


        Note: graph() uses private auxiliary function graphAux() .
    --------------------------------------------------------------------------*/


    ContactList search(string& name) const;
    /*-------------------------------------------------------------------------
        Search the BST for item.

        Precondition: None.
        Postcondition: Returns true if item found, and false otherwise.
    --------------------------------------------------------------------------*/


    void insert(ContactList& contact);
    /*-------------------------------------------------------------------------
        Insert item into BST.

        Precondition: None.
        Postcondition: BST has been modified with item inserted at proper
        position to maintain BST property.
    --------------------------------------------------------------------------*/


    //MUST CHANGE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    bool remove(string& name);
    /*-------------------------------------------------------------------------
        Remove item from BST.

        Precondition: None.
        Postcondition: BST has been modified with item removed (if present);
        BST property is maintained.

        Note: remove uses auxiliary function search2() to locate the node
        containing item and its parent.
    --------------------------------------------------------------------------*/


    void edit(string& name);
    /*-------------------------------------------------------------------------
            Edit item from BST.

            Precondition: None.
            Postcondition: BST has been modified with item updated (if present);
            BST property is maintained.

            Note: remove uses search() function to locate the contact with
            specified searched name.
    --------------------------------------------------------------------------*/


private:

    /***** Private Function Members *****/


    void insertAux(BinNodePointer& subtreeRoot, const string& name) const;


    void inorderAux(ostream& out, BinNodePointer subtreePtr) const;
    /*-------------------------------------------------------------------------
        Inorder traversal auxiliary function.

        Precondition: ostream out is open; subtreePtr points to a subtree of this BST.
        Postcondition: Subtree with root pointed to by subtreePtr has been
        output to out.

        Note: inorder uses private auxiliary function inorderAux().
    --------------------------------------------------------------------------*/


    void graphAux(ostream& out, int indent, BinNodePointer subtreeRoot) const;
    /*-------------------------------------------------------------------------
        Graph auxiliary function.

        Precondition: ostream out is open; subtreePtr points to a subtree of this BST.
        Postcondition: Graphical representation of subtree with root pointed
        to by subtreePtr has been output to out, indented indent spaces.

        Note: inorder uses private auxiliary function inorderAux().
    --------------------------------------------------------------------------*/

    static bool searchAux(BinNodePointer& subtreeRoot, string& name);


    void search2(string&, bool& found, BinNodePointer& locptr, BinNodePointer& parent) const;
    /*-------------------------------------------------------------------------
        Locate a node containing item and its parent.

        Precondition: None.
        Postcondition: locptr points to node containing item or is null if
        not found, and parent points to its parent.
    --------------------------------------------------------------------------*/

    friend ostream& operator<< (ostream& out, const BST& aList);

    /***** Data Members *****/
    BinNodePointer myRoot;


}; // end of class template declaration

ostream& operator<<(ostream& out, const BST& aList);
//istream& operator>>(istream& in, BST& aList);

#endif /* BST_hpp */

