#include <bits/stdc++.h>
using namespace std;


int make( int S[], int m, int n )
{
    if (n == 0) return 1;
    if (n < 0) return 0;
    if (m <=0 && n >= 1)  return 0;

    return make(S,m - 1,n) + make(S,m,n-S[m-1] );
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int m,n;
    cin>>m>>n;
    int coin[m];
    for(int i=0;i<m;i++){
        cin>>coin[i];
    }

    cout<<make(coin, m, n);

    return 0;
}
