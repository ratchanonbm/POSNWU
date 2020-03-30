#include <bits/stdc++.h>
using namespace std;

int c = 0;

void stair(int n){
    cout<<n<<endl;
    if(n>1) stair(n-1);
    else if(n>2) stair(n-2);
    else if(n>3) stair(n-3);

    if(n==0) c++;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n;
    cin>>n;
    stair(n);
    cout<<c<<"Ways";


    return 0;
}
