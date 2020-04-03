/*
    Task: Quiz#4 Max
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;
int max_index(int a[],int l,int r){
    if(l == r - 1) return l;
    int mid = (l + r) / 2;
    if(a[mid]<a[mid+1])
        return max_index(a,mid+1,r);
    else
        return max_index(a,l,mid+1);
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int a[] = {1,2,4,5,6,7};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<max_index(a,0,n);


    return 0;
}
