/*
    Task: Bishu and Soldiers
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n;
    cin>>n;

    int soldier[n];

    for(int i=0;i<n;i++) cin>>soldier[i];

    sort(soldier,soldier+n);

    int q;
    cin>>q;

    int power[q];

    for(int i=0;i<q;i++) cin>>power[i];

    int match[q][2];

    for(int i=0;i<q;i++){
        int c = 0,sum = 0;
        int j=0;
        //cout<<"==== [Match] ====="<<endl;
        //cout<<"power: "<<power[i]<<endl;
        while(power[i]>=soldier[j]){
            //cout<<soldier[j]<<endl;
            c++;
            sum += soldier[j];
            j++;
            if(j == n) break;
        }
        match[i][0] = c;
        match[i][1] = sum;
    }
    for(int i=0;i<q;i++) cout<<match[i][0]<<" "<<match[i][1]<<endl;

    return 0;
}
