/*
    Task: Index Of Value
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int b_search(int a[],int l,int r,int x){
    if(r >= 1){
        int mid = (l + r) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            return b_search(a, l, mid - 1, x); //Don't Find on right side of array

        return b_search(a, mid + 1, r, x);      //Don't Find on left side of array
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n;
    cin>>n;

    int num[n];

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    sort(num,num+n);

    int com;
    cin>>com;
    for(int i=0;i<com;i++){
        int findNum;
        cin>>findNum;
        int result = b_search(num,0,n,findNum);       //Result = return value from function
        if(result != -1) cout<<result+1<<endl;
        else cout<<"Not Found"<<endl;
    }


    return 0;
}
