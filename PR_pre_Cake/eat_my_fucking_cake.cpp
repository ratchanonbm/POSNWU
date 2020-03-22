#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    float sum=0;

    for(int i=0;i<n;i++){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        sum += a;
        sum += b*0.75;
        sum += c*0.50;
        sum += d*0.25;
        sum += e*0.125;
    }

    cout<<ceil(sum);
}
