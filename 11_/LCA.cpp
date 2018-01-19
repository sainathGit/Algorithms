/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of a BST Node is as follows:
struct Node {
    int data;
    Node * right, * left;
};*/
/*You are required to complete
this function*/
#include <vector>
using namespace std;

bool find_path(Node *node, int n, vector<int> &path)
{
    if (node == NULL)
        return false;
    else if (node->data == n) {
        path.push_back(node);
        return true;
    }
    else {
        if(find_path(node->left,n,path)) {
            path.push_back(node);
            return true;
        }
        if(find_path(node->right,n,path)) {
            path.push_back(node);
            return true;
        }
    }

    return false;
}

Node* LCA(Node *root, int n1, int n2)
{
    vector<node*> path1,path2;
    int i,j;
    
    find_path(root,n1,path1);
    find_path(root,n2,path2);
    
    i = path1.size() - 1;  j = path2.size() - 1;
    for (;i>=0 && j >= 0 && path1[i]->data==path2[j]->data;  --i,--j );
    return path1[i+1];
/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of a BST Node is as follows:
struct Node {
    int data;
    Node * right, * left;
};*/
/*You are required to complete
this function*/
#include <vector>
using namespace std;

bool find_path(Node *node, int n, vector<int> &path)
{
    if (node == NULL)
        return false;
    else if (node->data == n) {
        path.push_back(node);
        return true;
    }
    else {
        if(find_path(node->left,n,path)) {
            path.push_back(node);
            return true;
        }
        if(find_path(node->right,n,path)) {
            path.push_back(node);
            return true;
        }
    }

    return false;
}

Node* LCA(Node *root, int n1, int n2)
{
    vector<node*> path1,path2;
    int i,j;
    
    find_path(root,n1,path1);
    find_path(root,n2,path2);
    
    i = path1.size() - 1;  j = path2.size() - 1;
    for (;i>=0 && j >= 0 && path1[i]->data==path2[j]->data;  --i,--j );
    return path1[i+1];
}