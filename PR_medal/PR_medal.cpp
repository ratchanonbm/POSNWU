/*
    Task: PR_medal
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int N;
    cin>>N;

    long long int dev[N];
    long long int platform[N];

    for(int i=0;i<N;i++) cin>>dev[i];
    for(int i=0;i<N;i++) cin>>platform[i];

    sort(dev,dev+N,greater<int>());
    sort(platform,platform+N);

    long long int mn = INT_MAX;
    long long int mx = 0;
    for(int i=0;i<N;i++){
        mx = max(mx,dev[i]+platform[i]);
        mn = min(mn,dev[i]+platform[i]);
    }
    //cout<<mx<<endl;
    //cout<<mn<<endl;

    cout<<mx-mn<<endl;


    return 0;
}
