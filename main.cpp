//Rachel Festervand 
//Compilors P0 
//This is the main file for project P0
//The project reads in a file name and gives extension .input1, or reads in data from user or pipes a file.
//It then creates an unbalanced binary tree and outputs the tree in inorder,preorder and postorder traversal 
 
#include <iostream>
#include <cstdlib> 
#include <fstream> 
#include <string>   
#include "tree.h" 
using namespace std; 

void processFile(ifstream &infile, string filename ){

    BST bst; 
    Node aroot; 
    Node *proot; 
    proot = &aroot; 
    Node newNode; 
    Node *pNode; 
    pNode = &newNode;
    string word;  
    int defined = 0;

     
    infile.open(filename.c_str()); 

    if (!infile){ 
        cout << "Failure to open file" << endl; 
    }  
    //Process the words in the file 
    while (infile >> word){ 
       //If the root has not been defined, defined it 
       if (defined  == 0) {
          char k = word.at(0);  
          proot-> data = word; 
     	  proot->right = NULL; 
     	  proot->left = NULL;
          proot->key = k;
          proot->depth = 0;    
          defined = 1;       
       } 
       else{ 
          pNode->data = word;
          pNode->depth = bst.totalDepth;  
          bst.buildTree(proot,pNode); 
         } 
       
      //Print the In order traversal
      cout << "Printing inorder traversal " << endl;  
      bst.printInorder(proot); 
      cout << "Printing preorder tranversal " << endl; 
      bst.printPreorder(proot); 
      cout << "Printing postorder tranversal " << endl; 
      bst.printPostorder(proot); 
   }
} 

int main(int argc, char*argv[]){  
    
     //If no argument, open a txt file 
     if(argc == 1) { 
        string filename = "test.txt"; 
        string temp; 
        ofstream file; 
        file.open(filename.c_str()); 
        while(getline(cin,temp)){ 
	   file << temp << " ";  
        } 
        file.close(); 
        ifstream infile; 
        processFile(infile,filename); 
     }          

     //take first argument and turn into file with .input1 as file name  
     else if  (argc == 2) {
       string file = argv[1]; 
       string filename = file + ".input1"; 
       ifstream infile;      
       processFile(infile,filename); 
     }
     //If another file is piped 
     else if (argc > 2 ){ 
       cout << "Too many command arguments, ending program" << endl; 
       exit(EXIT_FAILURE); 
      }     
   return 0; 
} 
