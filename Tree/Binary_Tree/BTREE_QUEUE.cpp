/*
    Task: Binary Tree print using queue
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

//Function Prototype
void printLevelOrder(Node *root);

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Driver Code
    struct Node *root  = new Node(1);
    root->left          = new Node(2);
    root->right         = new Node(3);
    root->left->left    = new Node(4);
    root->left->right   = new Node(5);

    root->right->left   = new Node(6);
    root->right->right  = new Node(7);


    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);


    return 0;
}

void printLevelOrder(Node *root){
    if(root == NULL) return;

    //If root doesn't NULL
    queue<Node *> q;    //Creae Empty Queue

    q.push(root);       //Enqueue root

    while(!q.empty()){

        Node *node = q.front();     //Node = q.front
        cout<<node->data<<" ";     //Print node data
        q.pop();                    //Pop queue

        if(node->left != NULL){
            q.push(node->left);
        }

        if(node->right != NULL){
            q.push(node->right);
        }
    }
}

