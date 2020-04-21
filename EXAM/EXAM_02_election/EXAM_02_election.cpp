/*
    Task: EXAM_02_election
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int c = 0;

void createVote(int vote[],int i,int N,int val){

    if(i<N){
        vote[i] = val;
        createVote(vote,i+1,N,1);
        createVote(vote,i+1,N,0);
    }
    if(i==N-1){
        //for(int j=0;j<N;j++) cout<<vote[j]<<" ";
        for(int j=0;j<N-1;j++) {
            if(vote[j]==1&&vote[j+1]==1) {
                //cout<<"\tWin";
                c++;
                break;
            }
        }
        //cout<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int N;
    cin>>N;

    int vote[N];
    createVote(vote,0,N,0);
    createVote(vote,0,N,1);

    cout<<c<<endl;
    return 0;
}
