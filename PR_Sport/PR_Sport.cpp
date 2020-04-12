/*
    Task: PR_Sport
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void match(string str, int k, int a, int b){
    if(a == k||b == k){
        cout<<str<<"\n";
        return;
    }
    match(str+"W ",k,a+1,b);
    match(str+"L ",k,a,b+1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int k;  //Number of set to win
    int a;  //Before Win
    int b;  //Before Lose

    cin>>k;
    cin>>a>>b;

    match("",k,a,b);


    return 0;
}
