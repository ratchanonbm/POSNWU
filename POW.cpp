/*
    Task:
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int power(int a,int l,int r){
    int ans = 1;
    if(r==0) ans = 1;
    else if(l==r) ans = a;
    else {
        ans = a * power(a,l+1,r);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int a,r;
    cin>>a>>r;
    cout<<power(a,1,r);

    return 0;
}
