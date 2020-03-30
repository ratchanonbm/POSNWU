#include <bits/stdc++.h>
using namespace std;

int toh(int n){
    if(n == 2) return 3;
    else return tohtoh(n-1)+1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int i;
    cin>>i;
    cout<<toh(i);


    return 0;
}
