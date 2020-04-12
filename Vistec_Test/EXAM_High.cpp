/*
TASK: high
LANG: C++
AUTHOR: Ratchanon Panmas
CENTER: WU
*/
#include <bits/stdc++.h>
using namespace std;

//Node data structure
struct Node{
    int data;
    struct Node *left,*right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

//Add Node to tree
struct Node* addNode(int data){
    Node* node = new Node(data);    //Create new node with given data
    return node;
}

//addData to graph
struct Node* addData(struct Node* root, int data, queue<Node *> &q){
    Node* node = addNode(data);    //addNode data = data

    if(root == NULL) root = node;  //if root is null (not create root) Make root data from null to data

    //Level order insertion from left to right
    //If left empty
    else if (q.front()->left == NULL){
        //cout<<"Insert Left"<<endl;
        q.front()->left = node;
    }
    else {
        q.front()->right = node;
        //cout<<"Insert Right"<<endl;
        //If insert right it mean this mode is full
        q.pop();    //Full in this node goto next node
    }

    q.push(node);   //Push node to queue for insert next data
    return root;    //Return tree
}

//Function Create Binary tree
struct Node* createBTree(vector<int> input, int n) {

    struct Node *root = NULL;  //Create tree root = NULL

    queue<Node *> q;            //Queue to insert Value to tree

    //Loop insert data to tree
    for (int i = 0; i < n; i++){
        //cout<<"Insert "<<input[i]<<endl;
        root = addData(root, input[i], q);
    }

    //Finish create Tree
    return root;
}

//Function to Compute Tree Height
int height(Node* Node){
    if (Node == NULL||Node->data == -1) return 0;
    else {
        int lheight = height(Node->left);
        int rheight = height(Node->right);
        if (lheight > rheight)
              return(lheight + 1);
        else return(rheight + 1);
    }
}

//Check Graph data
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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int n;
    cin>>n;

    vector<int> input;

    //Input Data in tree
    while(n != -2){
        input.push_back(n);
        cin>>n;
    }

    //cout<<"Finished Input"<<endl;

    //For Debugging
    //for(int i=0;i<input.size();i++) cout<<input[i]<<" ";

    int nData = input.size();   //Vector size to loop create tree
    //cout<<nData<<endl;

    Node* root = createBTree(input, nData);

    //cout<<"Finished Create Tree"<<endl;

    //printLevelOrder(root);


    cout<<height(root);


    return 0;
}
