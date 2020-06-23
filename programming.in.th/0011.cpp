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
    int mod[10];

    for(int i=0;i<10;i++){
        int num;
        cin>>num;
        mod[i] = num%42;
    }

    sort(mod, mod+10);

    int c = distance(mod,unique(mod, mod+10));
    cout<<c;

    return 0;
}
