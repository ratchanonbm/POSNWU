/*
    Task: Coin Collecting
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int board[5][5] = {
                    {1,0,0,0,0},
                    {0,1,0,0,0},
                    {0,0,1,0,0},
                    {0,0,0,1,0},
                    {0,0,0,0,1}
                   };

int max_coin(int board[5][5]){
    int row = 5;
    int col = 5;

    int F[5][5] = {0};

    F[0][0] = board[0][0];
    for(int i=1;i<row;i++){
        F[0][i] = F[0][i-1] + F[0][i];
    }

    for(int i=1;i<row;i++){
        F[i][0] = F[i-1][0] + board[i][0];
        for(int j=1;j<col;j++){
            F[i][j] = max(F[i - 1][j], F[i][j - 1]) + board[i][j];
        }
    }

    return F[4][4];


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    cout<<max_coin(board);

    return 0;
}
