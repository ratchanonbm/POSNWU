/*
    Task: PR_NQueen
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

bool isValid(int col[],int k){
    int r1 = k;
    for(int r2=1;r2<r1;r2++){
        if(col[r1]==col[r2] || abs(col[r1] - col[r2] == r1 - r2))
        return false;
    }
    return true;
}

void queen(int col[],int m,int n){
    if(m == n){
        cout<<col[m]<<" ";
    } else {
        for(int i=1;i<=n;i++){
            col[m+1] = i;
            if(isValid(col,m+1))
                queen(col,m+1,n);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        int n;
        cin>>n;

        int col[n] = {0};
        cout<<"[";
        queen(col,0,n);
        cout<<"]";
        cout<<endl;
    }


    return 0;
}
