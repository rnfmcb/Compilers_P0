#include <iostream> 
#include <stdio.h> 
#include <stdlib.h>
#include <string>  
#include "tree.h" 


using namespace std; 

//Create a new node 
Node* makeNew(string data) { 
  char ch = data.at(0);
//  cout << "key in makenew function" <<  ch << endl;
//  cout << "data in makeNew fution "<< data << endl;   
  Node* create = new Node(); 
  create->data = data; 
  create->left = create-> right = NULL;
  create->key = ch;  
} 
//Insert Nodes to build the tree 
Node* buildTree(Node* root, string data) {
  char key = data.at(0);
  //If nothing is in the root, make a new node   
  if(root == NULL) { 
   root = makeNew(data);
   cout << "root in buildtree "<< root << endl; 
   return root; 
  } 
  //Calls function recursively until finds the correct node. 
  //Inserts to the left if data equals or is less then  
  else if (key <= root ->key){
    root ->left = buildTree(root->left,data); 
  } 
  //Inserts to the right if data is greater 
  else{ 
    root->right = buildTree(root->right,data); 
  } 
  return root; 
}  

//Prints in order traversal    
void printInorder(Node *root){ 
  
  if(root != NULL) { 
    printInorder(root->left);
  }  
    cout << "Key " << root->key << endl; 
    cout << "Left child " << root->left << endl;    
    cout << "Data " << root->data << endl;  
    printInorder(root->right); 
    cout << "Right child " << root->right << endl; 
    cout << "Data " << root->data << endl; 
} 




//printPreorder()
//printPostorder()
