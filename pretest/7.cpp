#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n;
    cin>>n;

    int p = 1;

    for(int i=1;i<=n;i++){
       p *= i;
    }

    cout<<p;

    return 0;
}
