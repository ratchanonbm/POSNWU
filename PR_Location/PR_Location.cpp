/*
    Task: PR_Location
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int M;  //Row M
    int N;  //Col N

    cin>>M>>N;

    int K;  //Area K*K
    cin>>K;

    int fn[M+1][N+1];
    memset(fn,0,sizeof(fn));

    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            int input;
            cin>>input;
            fn[i][j] = input + fn[i][j-1] + fn[i-1][j] - fn[i-1][j-1];
        }
    }
    int mx = INT_MIN;
    for(int i=1;i+K-1<=M;i++){
        for(int j=1;j+K-1<=N;j++){
            mx = max(mx, fn[i+K-1][j+K-1] - fn[i+K-1][j-1] - fn[i-1][j+K-1] + fn[i-1][j-1]);
        }
    }
    cout<<mx;

    return 0;
}
