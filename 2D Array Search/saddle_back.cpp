/*
    Task:
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int mat[3][3] = {
                 { 1, 2, 3},
                 { 4, 5, 6},
                 { 7, 8, 9}
                };

void find_2d(int mat[3][3], int top, int bot,int left, int right, int X) {

    //Find Middle position
    int i = top + (bot-top)/2;
    int j = left + (right-left)/2;

    //Check Middle
    if (mat[i][j] == X) cout<<"Found"<<endl;
    else{
        if (i != bot || j != left)
        find_2d(mat, top, i, j, right, X);

        if (top == bot && left + 1 == right)
        if (mat[top][right] == X)
            cout<<"Found"<<endl;

        if (mat[i][j] < X){
            if (i + 1 <= bot)
            find_2d(mat, i + 1, bot, left, right, X);
        }

        else{
            if (j - 1 >= left)
            find_2d(mat, top, bot, left, j - 1, X);
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code


    return 0;
}
