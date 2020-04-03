/*
    Task: PR_Tug
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int N;  //N player(s) per team
    cin>>N;

    int t1[N];  //Team 1
    int t2[N];  //Team 2

    //Position of Team 1
    for(int i=0;i<N;i++){
        cin>>t1[i];
    }

    //Position of Team 2
    for(int i=0;i<N;i++){
        cin>>t2[i];
    }

    //Check Data
    //Position of Team 1
    /*cout<<"===== [Team 1] ====="<<endl;
    for(int i=0;i<N;i++){
        cout<<"Player "<<i+1<<": "<<t1[i]<<endl;
    }

    //Position of Team 2
    cout<<"===== [Team 2] ====="<<endl;
    for(int i=0;i<N;i++){
        cout<<"Player "<<i+1<<": "<<t2[i]<<endl;
    }*/

    sort(t1,t1+N);
    sort(t2,t2+N);

    //Check Data
    //Position of Team 1
    //cout<<"===== [Team 1] ====="<<endl;
    //for(int i=0;i<N;i++){
    //    cout<<"Player "<<i+1<<": "<<t1[i]<<endl;
    //}

    //Position of Team 2
    //cout<<"===== [Team 2] ====="<<endl;
    //for(int i=0;i<N;i++){
    //    cout<<"Player "<<i+1<<": "<<t2[i]<<endl;
    //}

    int sum = 0;

    //cout<<"===== [Tug] ====="<<endl;
    for(int i=0;i<N;i++){
        //cout<<t1[i]<<" Vs "<<t2[i]<<endl;
        sum += abs(t1[i]-t2[i]);
    }

    cout<<sum;


    return 0;
}
