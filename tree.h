//Rachel Festervand 
//Project 0 Compilors 
//This is the header file for tree class 
#include <iostream> 
#ifndef TREE_H 
#define TREE_H 

#include "node.h"

class BST{
  public:
     int totalDepth;      
     void  buildTree(Node*,Node*);
     void printInorder(Node*);
     void print(Node*);  
     BST(); 
}; 

  
#endif 
 
