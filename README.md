# Compilers_P0-
Assume you do not know the size of the input file
Assume the input data is all strings separated with standard WS separators (space, tab, new line)
If the input file is not readable for whatever reason, or command line arguments are not correct, the program will abort with an appropriate message
The program will read the data left to right and put them into a tree, which is a binary search tree (BST) with respect to the first character string of the string, that is all strings starting with the same character are equal, and < or > are using the < and > operation between the first characters
Tree is never balanced nor restructured other than growing new nodes
A node should contain all data that falls into the node except that literally the same strings will show up only once (set)
The program will subsequently output 3 files corresponding to the 3 traversals, named file.preorder, file.inorder and file.postorder. Note that file is the base name of the input file if given, and it is 'out' if not given.
Treversals
preorder
inorder
postoder
Printing in traversal
a node will print the node's character intended by 2 x depth of the node, followed by the list of strings from the node set
