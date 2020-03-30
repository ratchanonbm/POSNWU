#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    //Head
    head->data = 1;
    head->next = second;

    //Second
    second->data = 2;
    second->next = third;

    //Third
    third->data = 3;
    third->next = NULL;


    return 0;
}
