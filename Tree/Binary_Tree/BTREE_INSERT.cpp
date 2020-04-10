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

void printInorder(struct Node* node);
void INSERT(Node* temp_node, int key);

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Driver Code
    struct Node *root  = new Node(10);
    root->left          = new Node(11);
    root->right         = new Node(9);
    root->left->left    = new Node(7);

    root->right->left   = new Node(15);
    root->right->right  = new Node(8);


    cout<<"Inorder traversal of binary tree is \n";
    printInorder(root);
    cout<<endl;

    int key;
    cin>>key;
    INSERT(root,key);

    cout << "Inorder traversal of binary tree is \n";
    printInorder(root);
    cout<<endl;



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

void INSERT(Node* temp_node, int key) {
    queue<Node *> q;

    q.push(temp_node);

    while (!q.empty()) {
        Node *temp_node = q.front();
        q.pop();

        if (!temp_node->left) {
            temp_node->left = new Node(key);
            break;
        } else
            q.push(temp_node->left);

        if (!temp_node->right) {
            temp_node->right = new Node(key);
            break;
        } else
            q.push(temp_node->right);
    }
}
