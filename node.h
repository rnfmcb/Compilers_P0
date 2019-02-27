//Rachel Festervand 
//Compilors, project 0
//This is the header file for the nodes and where they are defined.
 
#ifndef NODE_H
#define NODE_H 

#include <string> 
typedef struct Node {
   char key;  
   struct Node *left; 
   struct Node *right;  
   std::string data;  
   
}Node;  

#endif  
