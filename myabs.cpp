/*
    Task: myabs
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int myabs(int i){
    if(i<0) return -i;
    else return i;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int i;
    cin>>i;
    cout<<"ABS "<<i<<" = "<<myabs(i);


    return 0;
}
