/*
    Task:
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    double R;
    cin>>R;

    double taxi = 2*R*R;
    double normal = M_PI*R*R;

    cout<<setprecision(6)<<fixed;
    cout<<normal<<"\n"<<taxi;


    return 0;
}
