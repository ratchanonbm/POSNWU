/*
    Task: Binary Tree
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

int height(Node* Node){
    if (Node == NULL) return 1;
    else {
        int lheight = height(Node->left);
        int rheight = height(Node->right);
        if (lheight > rheight)
              return(lheight + 1);
        else return(rheight + 1);
    }
}

void printGivenLevel(Node* tree, int level){
    if (tree == NULL) return;
    if (level == 1) cout << tree->data << " ";
    else if (level > 1) {
        printGivenLevel(tree->left, level-1);
        printGivenLevel(tree->right, level-1);
    }
}

void printLevelOrder(Node* root){
    int h = height(root);
    int i;
    for (i = 0; i < h; i++)
        printGivenLevel(root, i);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    struct Node *root  = new Node(1);
    root->left          = new Node(2);
    root->right         = new Node(3);
    root->left->left    = new Node(4);
    root->left->right   = new Node(5);


    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);


    return 0;
}
