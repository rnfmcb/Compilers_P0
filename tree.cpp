#include <iostream> 
#include <stdio.h> 
#include <stdlib.h>
#include <string>  
#include "tree.h" 


using namespace std; 

Node* insert(Node* leaf, string data, char key){
  if(leaf!= NULL) 
     buildTree(leaf,data); 
  else{
     leaf = new Node; 
     leaf->data=data; 
     leaf->left = NULL; 
     leaf->right = NULL; 
     leaf->key = key; 
   }  
}
//Insert Nodes to build the tree 
Node*  buildTree(Node *leaf, string data) {
  char k = data.at(0);
  //If nothing is in the root, make a new node   
 
  if (leaf == NULL) { 
    leaf = new Node; 
    leaf->data = data; 
    leaf->key = k; 
    leaf->right = NULL; 
    leaf->left = NULL;
    cout << "Root added " << endl; 
    return leaf;  
  } 

  else if (leaf->key == k) { 
    //add some data
    cout << "added data" << endl;  
  } 


  //Calls function recursively until finds the correct node. 
  //Inserts to the right  if data equals or is less then  
 else  if (k > leaf->key){
    if(leaf->right != NULL) 
      	insert(leaf->right, data, k); 
    else{
    	leaf->right = new Node; 
      	leaf->right ->key= k; 
      	leaf->right->right = NULL; 
      	leaf->right->left = NULL; 
     }  
        
  }
  
  //Insertsf to the left if 
  else if (k < leaf->key){ 
    if(leaf->left != NULL) 
       buildTree(leaf->left,data);  
    else{   
       leaf->left = new Node; 
       leaf->left->key = k; 
       leaf->left->left= NULL; 
       leaf->right->right = NULL; 
     } 
  }
  return leaf; 
}  

//Prints in order traversal    
/*void printInorder(Node *root){ 
  
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
*/



//printPreorder()
//printPostorder()
