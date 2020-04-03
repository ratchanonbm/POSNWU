/*
    Task: Linear Search (Sorted Array)
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int l_search(int a[],int x,int n){

    for(int i=0;i<n;i++){
        cout<<"Now Search: "<<a[i]<<endl;
        if(a[i] == x) return i;
        if(a[i] > x) return -1;
    }
    return -1;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int a[] = {2,3,3,4,5,6,7,8,9};      //Array of number
    int n = sizeof(a)/sizeof(a[0]);    //Size of array
    int x;                              //Find X

    cin>>x;                             //Input X

    int result = l_search(a,x,n);       //Result = return value from function
    if(result != -1) cout<<"Found at "<<result<<endl;
    else cout<<"Not Found"<<endl;

    return 0;
}
