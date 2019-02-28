//Rachel Festervand Program Translation 
//This is the class file for a binary search tree 

#include <iostream> 
#include <stdio.h> 
#include <stdlib.h>
#include <string>  
#include "tree.h" 
 

using namespace std; 

 BST::BST(){ 
  totalDepth = 1;   
 } 

//Insert Nodes to build the tree 
void  BST:: buildTree(Node *tree, Node* leaf) {
  string data = leaf->data;
  string tempData = tree->data.append(" "); 
  //cout << "Data from leaf " << data << endl; 
  char k = data.at(0);
 // cout << "K value is " << k << endl; 
  //cout << "Data and key " << data << " " << k << endl; 
 
  //If the value is already in the tree, then add to the array 
  if (tree->key == k) {  
     tree->data = tempData.append(data); 
    //add some data
    cout << "added data to " << tree-> data << "key "<< tree->key <<  endl;  
  } 


  //Calls function recursively until finds the correct node. 
  //Inserts to the right  if data equals or is less then  
   if (k > tree->key){
      if(tree->right != NULL){  
       	buildTree(tree->right,leaf);
        cout << "Recalling right leaf node" << endl;
      }  
      else{  
    	tree->right = new Node; 
      	tree->right->key= k; 
      	tree->right->right = NULL; 
      	tree->right->left = NULL;
        tree->right->depth = totalDepth; 
        tree->right->data = data; 
        cout << "Created new right node "<< "key " << tree->key << " tree data " << tree->data << endl; 
        cout << "depth "  << tree->depth << endl;   
     }  
        
  }
  
  //Insertsf to the left if 
  if (k < tree->key){ 
    if(tree->left != NULL) { 
       buildTree(tree->left,leaf);   
      // cout << "Recalling left node" << endl; 
    }   
    else{    
       tree->left = new Node; 
       tree->left->key = k; 
       tree->left->left = NULL; 
       tree->left->right = NULL;
       tree->left->data = data; 
       tree->left->depth = totalDepth;  
       cout << "Adding new left leaf, key: " << tree->key << "Data: "<< tree->data << "depth " << tree->depth <<  endl;  
     } 
  }
   
}  

//Prints in order traversal    
void BST::printInorder(Node *ptr){ 
    
    //If the root 
    //if (ptr->depth = 0)
    //  cout << ptr->key << " " << ptr->data << endl; 
    
    
    if( ptr != NULL){ 
      printInorder(ptr->left); 
      print(ptr); 
      printInorder(ptr->right); 
    }      
} 
void BST:: print(Node *ptr) { 
   
    if (ptr-> depth != 0){  
    int printDepth = ptr->depth; 
    string dash; 
    for(int i = 1; i <= printDepth; i++){ 
        cout << "-"; 
    } 
    cout << ptr->key << " " << ptr->data << endl; 
    } 
   else 
     cout << ptr->key << " " << ptr->data << endl; 
}     


//printPreorder()
//printPostorder()
