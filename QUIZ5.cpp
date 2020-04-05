/*
    Task: QUIZ#5 Matrix Sum
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

#define F(i,a,b) for(int i = (int)(a); i <= (int)(b);i++)
#define RF(i,a,b) for(int i = (int)(a); i >= (int)(b);i--)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int X;
    int Y;
    cin>>X>>Y;
    int Cost[X][Y];
    F(1,0,X-1)F(1,0,Y-1)
    cin>>Cost[i][j];
    int Allcost [X] [Y];
    AllCost[0][0] = Cost[0][0];
    F(1,1,Y-1) AllCost[0][j] = AllCost[0][j-1] + Cost[0][j];
    F(i,1,X-1) AllCost[i][0] = AllCost[i-1] [0] + Cost[i][0];
    F(i,1,X-1) F(1,1,Y-1)
        AllCost[i][j] = AllCost[i-1] [j]+AllCost[i][j-1]+ Cost[i][j]-AllCost [i-1][j-1];
    int Q;
    cin>>Q;
    for(int q=0;q<Q;q++){
        int M;
        int n;
        cin>>M>>N;
        cout<<AllCost[M–1][N-1]<<endl;
    }
    return 0;
}
