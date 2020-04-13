/*
    Task: 0003
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int n;
    cin>>n;

    int mx = INT_MIN;
    int mn = INT_MAX;

    for(int i=0;i<n;i++){
        int A;
        cin>>A;
        mx = max(mx,A);
        mn = min(mn,A);
    }
    cout<<mn<<endl<<mx;


    return 0;
}
