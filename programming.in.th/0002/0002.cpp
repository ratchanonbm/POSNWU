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
    int n;
    cin>>n;

    int mn,mx;
    cin>>mn;
    mx = mn;
    for(int i=0;i<n-1;i++){
        int input;
        cin>>input;

        mn = min(mn,input);
        mx = max(mx,input);
    }

    cout<<mn<<"\n"<<mx;



    return 0;
}
