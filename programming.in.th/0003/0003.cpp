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
    int m,n;
    cin>>m>>n;

    int mat1[m][n];
    int mat2[m][n];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>mat1[i][j];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>mat2[i][j];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat1[i][j]+mat2[i][j]<<" ";
        }
        cout<<"\n";
    }



    return 0;
}
