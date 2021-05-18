//
//  Tree.hpp
//  binaryTree
//
//  Created by RAIDEMOT on 15.05.2021.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <stddef.h>
#include <iostream>
#include "Node.hpp"
#include <vector>

class Tree {
private:
    Node* root;

    void printTree(Node *ptr);
    
public:
    Tree();
    ~Tree();
    
    void insert(int data);
    Node* seek(int data);
    
    void remove(int data);
    Node* remove(Node* node, int data);
    
    void displayTree();
    int seekMin(Node* node) const;
    
    Node* minValueNode();
    Node* maxValueNode();
    
};

#endif /* Tree_hpp */
