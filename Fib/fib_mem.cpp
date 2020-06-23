/*
    Task: fib_mem
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int fib_mem[100];

int fib(int n){
    if(n <= 1) return n;
    else {
        if(fib_mem[n] != 0) {
            return fib_mem[n];
            cout<<"fib["<<n<<"]\n";
        }
        else {
            fib_mem[n] = fib(n-2) + fib(n-1);
            //cout<<"call fib\n";
        }
    }
    return fib_mem[n];

}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Driver Code
    memset(fib_mem,0,sizeof(fib_mem));
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int input;
        cin>>input;
        cout<<fib(input);
    }




    return 0;
}
