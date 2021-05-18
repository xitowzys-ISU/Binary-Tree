//
//  main.cpp
//  binaryTree
//
//  Created by RAIDEMOT on 15.05.2021.
//

#include <iostream>
#include "Tree.hpp"

int main(int argc, const char * argv[]) {
    
    Tree tree;
    tree.insert(6);
    tree.insert(5);
    tree.insert(7);
    tree.insert(10);
    
    tree.remove(10);
    tree.remove(5);
    
    tree.seek(10);
    
    tree.displayTree();
    
    return 0;
}
