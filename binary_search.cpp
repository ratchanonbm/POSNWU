/*
    Task: Binary Search
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int b_search(int a[],int x,int n){
    //cout<<n;
    if(n == 0) return -1;
    else if(n == 1) return 1;
    else {
        int half = n/2;
        if(a[half] > x) {
            int a_1[half];
            for(int i=0;i<n-half;i++) a_1[i] = a[i];
            //for(int i=0;i<half;i++) cout<<a_1[i]<<" ";
            b_search(a_1,x,half);
        }
        if(a[half] < x) {
            int a_1[half];
            for(int i=half;i<n;i++) a_1[half-i] = a[i];
            //for(int i=0;i<half;i++) cout<<a_1[i]<<" ";
            b_search(a_1,x,half);
        }
    }
}

/*int b_search(int a[],int l,int r,int x){
    if(r >= 1){
        int mid = (l + r) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            return b_search(a, l, mid - 1, x); //Don't Find on right side of array

        return b_search(a, mid + 1, r, x);      //Don't Find on left side of array
    }
    return -1;
}*/

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int a[] = {2,3,3,4,5,6,7,8,9};      //Array of number
    int n = sizeof(a)/sizeof(a[0]);    //Size of array
    int x=3;                              //Find X

                                //Input X

    int result = b_search(a,0,n,x);       //Result = return value from function
    if(result != -1) cout<<"Found at "<<result<<endl;
    else cout<<"Not Found"<<endl;

    int result = b_search(a,x,n);       //Result = return value from function
    if(result == 1) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

    return 0;
}
