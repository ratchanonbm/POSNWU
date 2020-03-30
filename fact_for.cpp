/*
    Task: Factorial For loop
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

    int sum = 1;

    for(int i=2;i<=n;i++){
        sum *= i;
    }

    cout<<sum;


    return 0;
}
