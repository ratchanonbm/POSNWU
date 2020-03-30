#include <bits/stdc++.h>
using namespace std;

int collect(int n,int m,int *board){
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n,m;
    cout<<"Row: ";
    cin>>n;
    cout<<"Col: ";
    cin>>m;
    int board[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Row: "<<i<<" Col: "<<j<<" Value: ";
            cin>>board[i][j];
        }
    }

    collect(n,m,(int *)board);


    return 0;
}
