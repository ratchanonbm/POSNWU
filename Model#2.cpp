/*
    Task: Model # 2
    Author: Ratchanon Panmas
    Lang: C++
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int c = 20;
    int d = 200000;
    int p = 100;
    int i = 1;
    while((d+c*i)>=(p*i)){

        cout<<"Profit: "<<(p*i)-(d+(c*i))<<endl;
        cout<<"I :"<<i<<endl;
        i++;
    }


    return 0;
}
