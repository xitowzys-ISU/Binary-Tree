//
//  Tree.cpp
//  binaryTree
//
//  Created by RAIDEMOT on 15.05.2021.
//

#include "Tree.hpp"

Tree::Tree() {
    root = NULL;
}

Tree::~Tree(){};

void Tree::insert(int data) {
    Node* node = new Node(data);
    
    if (!root) {
        root = node;
    } else {
        Node* current = root;
        
        while (1) {
            if (current->data > data) {
                if(current->left)
                    current = current->left;
                 else {
                    current->left = new Node(data);
                    break;
                }
            } else if (current->data < data) {
                if(current->right)
                    current = current->right;
                else {
                    current->right = new Node(data);
                    break;
                }
            }
        }
    }
}

Node* Tree::seek(int data) {
    
    Node* current = root;
    
    while(current != NULL) {
        if (data == current->data)
            return current;
        if (data < current->data)
            current = current->left;
        else
            current = current->right;
    }
    
    return current;
}

void Tree::remove(int data) {
    remove(root, data);
}

Node* Tree::remove(Node* current, int data) {
    
    if (current == NULL)
        return current;

    if (data < current->data)
        current->left = remove(current->left, data);
    else if (data > current->data)
        current->right = remove(current->right, data);
    else if (current->left != nullptr && current->right != nullptr) {
        current->data = seekMin(current->right);
        current->right = remove(current->right, current->data);
    }
    else {
        Node* temp_ptr;
        if (current->left != nullptr)
            temp_ptr = current->left;
        else
            temp_ptr = current->right;

        return temp_ptr;
    }
    return current;
}

int Tree::seekMin(Node* node) const {
    Node* current = node;
    while (current->left != nullptr)
        current = current->left;
    return current->data;
}

Node* Tree::minValueNode(){
    Node* current = root;
    
    while (current && current->left != NULL)
          current = current->left;
   
    return current;
}

Node* Tree::maxValueNode(){
    Node* current = root;
    
    while (current && current->right != NULL)
          current = current->right;
   
    return current;
}


void Tree::displayTree(){
    printTree(root);
}
void Tree::printTree(Node *ptr){
    
    if(ptr == NULL) return;
    
    printTree(ptr->left);
    printTree(ptr->right);
    std::cout << ptr->data << " ";
}
