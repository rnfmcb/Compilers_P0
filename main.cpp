//Rachel Festervand 
//Compilors P0 
//This is the main file for project P0 
#include <iostream>
#include <cstdlib> 
#include <fstream> 
#include <string>   
#include "tree.h" 

using namespace std; 

int main(int argc, char* argv[]) { 
//Process command line arguments 
ifstream infile; //Open test file 
BST bst;  
Node aroot;
Node *proot; 
proot = &aroot; 
Node newNode; 
Node *pNode; 
pNode = &newNode; 
int defined = 0;     
string word; 


infile.open("test.txt"); 
if (!infile){ 
 cout << "Failure to open file" << endl; 
}  
//Process the words in the file 
while (infile >> word){ 
     //If the root has not been defined, defined it 
   if (defined  == 0) {
      cout << "Starting if statement" << endl; 
      char k = word.at(0);  
      proot-> data = word; 
      proot->right = NULL; 
      proot->left = NULL;
      proot->key = k;
      proot->depth = 0;  
      cout << "Root is initialized  with key " << proot->key << endl; 
      cout << "Data is " << proot->data;
      cout << "level " << proot->depth << endl; 
      defined = 1;
       
   } 
   else{ 
      pNode->data = word;
      pNode->depth = bst.totalDepth;  
      bst.buildTree(proot,pNode); 
      cout << "pNode data is  "<< pNode->data << endl; 
   } 
} 
      //Print the In order traversal
      cout << "Printing inorder traversal " << endl;  
      bst.printInorder(proot); 
      cout << "Printing preorder tranversal " << endl; 
      bst.printPreorder(proot); 
      cout << "Printing postorder tranversal " << endl; 
      bst.printPostorder(proot);

return 0; 
} 
