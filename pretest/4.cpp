#include <bits/stdc++.h>
using namespace std;

void Dio(int n) {
    cout<<"Dio: ";
    for(int i=0;i<n;i++)cout<<"Muda ";
    cout<<endl;
}

void Jotaro(int m) {
    cout<<"Jotaro: ";
    for(int i=0;i<m;i++) cout<<"Ora ";
    cout<<endl;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int n=4,m=5;
    Dio(n);
    Jotaro(m);

    return 0;
}
