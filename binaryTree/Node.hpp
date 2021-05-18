//
//  Node.hpp
//  binaryTree
//
//  Created by RAIDEMOT on 15.05.2021.
//

#ifndef Node_hpp
#define Node_hpp

#include <stddef.h>
#include <iostream>

class Node {
    
public:
    int data;
    Node* left;
    Node* right;
    
    Node();
    ~Node();
    
    Node(int data);
};

#endif /* Node_hpp */
