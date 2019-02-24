//Rachel Festervand 
//Compilors P0 
//This is the main file for project P0 
#include <iostream>
#include <fstream> 
#include <string>  
#include "node.h" 
#include "tree.h" 

using namespace std; 

int main(int argc, char* argv[]) { 
//Process command line arguments 
ifstream infile; //Open test file 
Node* root = NULL; //Pointer to root
string word; 

infile.open("test.txt"); 
if (!infile){ 
 cout << "Failure to open file" << endl; 
}  
//Process the words in the file 
while (infile >> word){ 
   buildTree(root, word); 
} 
//= buildTree(file); 
//printPreorder(root); 
//printInorder(root); 
//printPostorder(root);

return 0; 
} 
