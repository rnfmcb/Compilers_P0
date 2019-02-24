//Rachel Festervand 
//Compilors, project 0
//This is the header file for the nodes and where they are defined.

#ifndef NODE_H
#define NODE_H 


typedef struct node {
 
  int count; 
  struct node *left; 
  struct node *right; 
  char *data[]; 

}node; 

#endif  
