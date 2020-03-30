#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int A[2][2] = {
                    1,2,
                    3,4
                  };
    int B[2][2] = {
                    5,6,
                    7,8
                  };

    int C[2][2] = {0};

    //Cross Product
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    //Output
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
