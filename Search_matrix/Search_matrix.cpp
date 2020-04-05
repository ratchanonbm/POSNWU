/*
    Task: Search in a matrix
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int T;
    cin>>T;

    int c[T];

    for(int t=0;t<T;t++){
        int N,M;
        cin>>N>>M;
        int mat[N*M];  //Array N x M

        //Input Array Data
        for(int i=0;i<N*M;i++){
            cin>>mat[i];
        }
        int X;
        cin>>X;

        sort(mat,mat+(N*M));

        //Search
        if(binary_search(mat,mat+(N*M),X)) c[t] = 1;
        else c[t] = 0;

    }

     for(int t=0;t<T;t++) cout<<c[t]<<endl;


    return 0;
}
