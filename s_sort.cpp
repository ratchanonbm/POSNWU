/*
    Task: Selection Sort
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void s_sort(int a[], int n)  {
    int i, j, m;

    for (i = 0; i < n-1; i++)  {
        m = i;
        for (j = i+1; j < n; j++)
        if (a[j] < a[m])  m = j;

        int temp = a[m];
        a[m] = a[i];
        a[i] = temp;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int a[] = {77,88,44,33,255,23,335,76};
    int n = sizeof(a)/sizeof(a[0]);

    s_sort(a,n);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";

    return 0;
}
