#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n;
    cin>>n;

    n--;

    for(int i=-n;i<=n;i++){
        for(int j=-n;j<=n;j++){
            if(abs(i)+abs(j)==n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
