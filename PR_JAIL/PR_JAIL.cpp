/*
    Task: PR_JAIL
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n;  //Number of prisoner
    int m;  //Skip

    cin>>n>>m;

    int prisoner[n] = {0};      //Prisoner

    //for(int i=0;i<n;i++) cout<<i+1<<"status: "<<prisoner[i]<<endl;

    int sacrificed[n];          //Sacrificed prisoner



    int k = 0;
    for(int i=0;i<n;i++){
        //cout<<"===== [Sacrificed] ====="<<endl;
        int j = 0;
        while(j<m){
            //cout<<"k: "<<k<<"\tj: "<<j<<endl;
            if(prisoner[k] == 0) j++;
            if(j == m) {
                sacrificed[i] = k+1;
                prisoner[k] = 1;
                //cout<<"Prisoner: "<<k+1<<"Dead"<<endl;
                break;
            }
            k++;
            if(k == n) k = 0;
        }
    }

    for(int i=0;i<n;i++) cout<<sacrificed[i]<<" ";

    return 0;
}
