//
//  Node.cpp
//  binaryTree
//
//  Created by RAIDEMOT on 15.05.2021.
//

#include "Node.hpp"


Node::Node() {
    
    left = NULL;
    right = NULL;
}

Node::~Node(){};

Node::Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
}
