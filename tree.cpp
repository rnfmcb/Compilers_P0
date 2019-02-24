#include <iostream> 
#include <stdio.h> 
#include <stdlib.h>
#include <string>  
#include "tree.h" 


using namespace std; 

//Create a new node 
Node* makeNew(string data) { 
  char ch = data.at(0); 
  Node* create = new Node(); 
  create->data = data; 
  create->left = create-> right = NULL;
  create->key = ch;  
} 
//Insert Nodes to build the tree 
Node* buildTree(Node* root, string data) {
  //If nothing is in the root, make a new node   
  if(root == NULL) { 
   root = makeNew(data);
   return root; 
  } 
  //Calls function recursively until finds the correct node. 
  //Inserts to the left if data equals or is less then  
  else if (data <= root ->data){
    root ->left = buildTree(root->left,data); 
  } 
  //Inserts to the right if data is greater 
  else{ 
    root->right = buildTree(root->right,data); 
  } 
  return root; 
} 

   
  
  
//printlnorder()
//printPreorder()
//printPostorder()
