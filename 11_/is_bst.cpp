#include <iostream>
#include <limits.h>

using namespace std;


struct node {

	int data;
	struct node* left;
	struct node* right
};

struct tree {
	struct node* root;
	int size;
}T;


struct node* create_tree() {

}

bool is_BST(struct node* n, int min, int max) {

	if (n == NULL)
		return true;
	else if (!(n->data <= max && n->data > min))
		return false
	else if (is_BST(n->left, min, n->data) && is_BST(n->right, n->data, max))
		return true;

return false;
}
int main() {

	srtuct tree T;
	T.root = create_tree();
	
	if (is_BST(T.root, INT_MIN, INT_MAX))
		cout << "YES";
	else 
		cout << "NO";

	
	return 0;
}