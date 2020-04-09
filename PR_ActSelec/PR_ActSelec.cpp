/*
    Task: PR_ActSelec
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

    for(int t=0;t<T;t++){
        int N;  //Number of activity
        cin>>N;

        pair<int ,int> act[N];

        for(int i=0;i<N;i++) cin>>act[i].second;
        for(int i=0;i<N;i++) cin>>act[i].first;

        sort(act,act+N);

        int stop = 0;
        int act_c = 0;
        for(auto x : act){
            if(x.second >= stop){
                act_c++;
                stop = x.first;
            }
        }
        cout<<act_c<<endl;
    }


    return 0;
}
