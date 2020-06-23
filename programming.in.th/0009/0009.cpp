/*
    Task:
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int n[3];

    for(int i=0;i<3;i++) cin>>n[i];

    sort(n,n+3);

    string str;
    cin>>str;
    for(int i:str){
        if(i == 'A') cout<<n[0]<<" ";
        else if(i == 'B') cout<<n[1]<<" ";
        else if(i == 'C') cout<<n[2]<<" ";
    }


    return 0;
}
