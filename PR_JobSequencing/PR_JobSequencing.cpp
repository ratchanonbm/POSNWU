/*
    Task: PR_JobSequencing
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

struct job{
    int id;
    int deadline;
    int profit;
};

bool cmpJob(job a, job b) {
    /*if(a.deadline == b.deadline)
       return a.profit > b.profit;
    return a.deadline < b.deadline;*/
    /*if(a.profit == b.profit){
        return a.deadline < b.deadline;
    }*/
    return a.profit > b.profit;
}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    int T;
    cin>>T;

    for(int t=0;t<T;t++){
        int N;
        cin>>N;

        job work[N];

        for(int i=0;i<N;i++){
           cin>>work[i].id;
           cin>>work[i].deadline;
           cin>>work[i].profit;
        }

        sort(work,work+N,cmpJob);

        int ans[N];
        bool timeslot[N];
        memset(timeslot,0,sizeof(timeslot));
        for(int i=0;i<N;i++){
            for(int j=min(N,work[i].deadline)-1;j>=0;j--){
                if(timeslot[j] == 0){
                    ans[j] = i;
                    timeslot[j] = 1;
                    break;
                }
            }
        }
        int cnt=0,res=0;
        for(int i=0;i<N;i++){
            if(timeslot[i]==1){
                cnt++;
                res = res + work[ans[i]].profit;
            }
        }
        cout<<cnt<<" "<<res<<"\n";
    }


    return 0;
}
