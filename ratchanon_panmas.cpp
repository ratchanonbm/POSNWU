#include <bits/stdc++.h>
using namespace std;

int coin_row(int C[], int n) {
  int F[n+1];
  F[0] = 0;
  F[1] = C[1];

  for(int i = 2;i<=n;i++) {
    F[i] = max(C[i] + F[i-2], F[i-1]);
  }

  return F[n];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }

    cout<<coin_row(c,n);


    return 0;
}
