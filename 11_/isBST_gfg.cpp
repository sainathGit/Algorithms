/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* left, * right;
}; */
/* Should return true if tree represented by root is BST. 
   For example, return  value should be 1 for following tree.
         20
     /      \ 
   10       30
  and return value should be 0 for following tree.
         10
     /      \ 
   20       30 */

#include <limits.h>

bool is_BST( Node* n, int min, int max) {

	if (n == NULL)
		return true;
	else if (!(n->data <= max && n->data > min))
		return false;
	else if (is_BST(n->left, min, n->data) && is_BST(n->right, n->data, max))
		return true;

return false;
}



bool isBST(Node* root) {
    
    if (is_BST(root, INT_MIN, INT_MAX))
        return 1;
    else
        return 0;
}
