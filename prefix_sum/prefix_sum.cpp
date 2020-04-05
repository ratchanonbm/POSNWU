/*
    Task: Prefix Sum
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void prefix_sum(int arr[],int pre[],int n){
    pre[0] = arr[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] + arr[i];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int prefix[n];
    //Calc Prefix Sum
    prefix_sum(arr,prefix,n);

    //Print Prefix Array
    for(int i=0;i<n;i++) cout<<prefix[i]<<" ";


    return 0;
}
