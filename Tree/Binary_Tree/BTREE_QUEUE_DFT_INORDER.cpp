/*
    Task: Binary Tree
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    struct Node *left,*right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

//Function Prototype
void printInorder(struct Node* node);

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Driver Code
    struct Node *root  = new Node('a');
    root->left          = new Node('b');
    root->left->left    = new Node('d');
    root->left->right   = new Node('e');

    root->left->right->left   = new Node('f');
    root->left->right->right   = new Node('g');

    root->left->right->right->left   = new Node('k');

    root->right     = new Node('c');

    root->right->right     = new Node('h');

    root->right->right->left     = new Node('i');
    root->right->right->right     = new Node('j');


    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);


    return 0;
}

void printInorder(struct Node* node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

