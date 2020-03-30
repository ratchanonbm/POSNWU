/*
    Task: Factorial Recursive
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n > 1) return n * fact(n-1);
    else{
        return 1;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    int n;
    cout<<"Enter nunber: ";
    cin>>n;
    cout<<"Fact "<<n<<": "<<fact(n);


    return 0;
}
