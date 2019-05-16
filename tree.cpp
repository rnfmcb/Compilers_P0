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
    check = false;    
} 

//Insert Nodes to build the tree 
void  BST:: buildTree(Node *tree, Node* leaf) {

    string data = leaf->data;
    string tempData = tree->data.append(" "); 
  
    //Create the key    
    char k = data.at(0);
 
    if (tree->depth == leaf->depth) { 
       totalDepth = totalDepth + 1; 
     } 
    //If the value is already in the tree, then add to the array 
     if (tree->key == k) {  
        tree->data = tempData.append(data); 
 
      }  

     //Calls function recursively until finds the correct node. 
     //Inserts to the right of data is less then the key and same level 
      if (k > tree->key){
          if(tree->right != NULL){ 
          	buildTree(tree->right,leaf);       
      }  
     else if (tree->right == NULL && leaf->depth == totalDepth) { 
         if (tree->depth == leaf->depth) {
             totalDepth = totalDepth + 1;
         } 
    	tree->right = new Node; 
       	tree->right->key= k; 
      	tree->right->right = NULL; 
      	tree->right->left = NULL;
        tree->right->depth = totalDepth;  
        tree->right->data = leaf->data;  
         
      } 
      else { 
        buildTree(tree->right,leaf);  
        
      } 
        
  }
  
      //Inserts to the left if the key is less then k and same level
      if (k < tree->key){ 
         if(tree->left != NULL) { 
             buildTree(tree->left,leaf);   
      
       }   
       else if (tree->left == NULL && leaf->depth == totalDepth){  
           if (tree->depth == leaf->depth) {
             totalDepth = totalDepth + 1;
       }  
       tree->left = new Node; 
       tree->left->key = k; 
       tree->left->left = NULL; 
       tree->left->right = NULL;
       tree->left->data = leaf->data; 
       tree->left->depth = totalDepth;   
       } 
       else { 
         buildTree(tree->right,leaf); 
        } 
     }   
}  

//Prints in order traversal    
void BST::printInorder(Node *ptr){ 
     
    if( ptr != NULL){ 
      printInorder(ptr->left); 
      print(ptr); 
      printInorder(ptr->right); 
    }      
} 
//Prints node in correct format. -- for level
void BST:: print(Node *ptr) { 
   
    if (ptr-> depth != 0){  
    int printDepth = ptr->depth; 
    string dash; 
    for(int i = 1; i <= printDepth; i++){ 
        cout << "--"; 
    } 
    cout << ptr->key << " " << ptr->data << endl; 
    } 
   else 
      cout << ptr->key << " " << ptr->data << endl; 
}     
//Prints preorder 
void BST::printPreorder(Node *ptr){ 

  if(ptr != NULL) { 
      print(ptr); 
      printPreorder(ptr->left); 
      printPreorder(ptr->right); 
  }
}
//Prints post order 
void BST::printPostorder(Node *ptr){ 
  
   if (ptr!= NULL) { 
      printPostorder(ptr->left); 
      printPostorder(ptr->right); 
      print(ptr); 
   } 
} 
