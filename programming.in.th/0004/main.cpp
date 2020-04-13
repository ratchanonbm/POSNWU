/*
    Task: 0004
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    bool isCap = false;
    bool isSma = false;
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++){
        if(str[i] >= 'A'&&str[i]<= 'Z') isCap = true;
        else if(str[i] >= 'a'&&str[i]<= 'z') isSma = true;
    }

    if(isCap&&isSma){
        cout<<"Mix";
    } else {
        if(isCap) cout<<"All Capital Letter";
        else if(isSma) cout<<"All Small Letter";
    }


    return 0;
}
