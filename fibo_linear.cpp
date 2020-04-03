/*
    Task: Fibo Linear Big O
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

unsigned long long fibo(int n){
    double a = (1 + sqrt(5))/2;
    double b = 1 - a;
    double result = (pow(a,n) - pow(b,n)) /  (a - b);
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n = 93;
    for(int i=1;i<=n;i++){
        //cout<<"Fibo ("<<i<<") = "<<fibo(i)<<endl;
        printf("Fibo (%2d) = %llu\n",i,fibo(i));
    }


    return 0;
}
