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
void deleteDeepest(struct Node* root,struct Node *d_node);

Node *deletion(struct Node* root,int key){
    if(root == NULL) return NULL;

    if(root->left == NULL&&root->right == NULL){
        if(root->data == key)
            return NULL;
        else
            return root;
    }

    queue<Node *> q;
    q.push(root);

    Node* temp;
    Node* key_node = NULL;

    while(!q.empty()){
        temp = q.front();
        q.pop();

        if (temp->data == key)
            key_node = temp;

        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }

    if(key_node){
        int x = temp->data;
        deleteDeepest(root, temp);
        key_node->data = x;
    }
    return root;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    struct Node* root   = new Node(10);
    root->left          = new Node(11);
    root->left->left    = new Node(7);
    root->left->right   = new Node(12);
    root->right         = new Node(9);
    root->right->left   = new Node(15);
    root->right->right  = new Node(8);

    cout<<"Inorder traversal of binary tree is \n";
    printInorder(root);
    cout<<endl;

    int key = 11;
    //cin>>key;
    root = deletion(root, key);

    cout << "Inorder traversal of binary tree is \n";
    printInorder(root);
    cout<<endl;

    return 0;
}

void printInorder(struct Node* node){
    if (node == NULL) return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

void deleteDeepest(struct Node* root,struct Node *d_node){
    queue<Node *> q;
    q.push(root);

    struct Node* temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();

        if(temp == d_node){
            temp = NULL;    //Set to null
            delete(d_node); //Deallocate memory
            return;
        }
        if(temp->right){
            if(temp->right == d_node){
                temp->right = NULL;
                delete(temp->right);
                return;
            } else {
                q.push(temp->right);
            }
        }
        if(temp->left){
            if(temp->left == d_node){
                temp->left = NULL;
                delete(temp->left);
                return;
            }
            else {
                q.push(temp->left);
            }
        }
    }
}
