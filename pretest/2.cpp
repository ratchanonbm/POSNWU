#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    cout<<"What is your name?";

    char fname[255];
    char lname[255];

    cin>>fname>>lname;

    int n = strlen(fname)+strlen(lname)+3;

    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;

    cout<<"*"<<fname<<" "<<lname<<"*"<<endl;

    for(int i=0;i<n;i++){
        cout<<"*";
    }

    return 0;
}
