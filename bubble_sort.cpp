/*
    Task: Bubble Sort
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void bb_Sort(int a[], int n){

    for (int i = 0;i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int a[] = {10, 11, 15, 1, 2, 4, 3};
    int n = sizeof(a)/sizeof(a[0]);

    bb_Sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
