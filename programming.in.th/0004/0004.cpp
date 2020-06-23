/*
    Task:
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Driver Code
    string input;
    cin>>input;

    bool sL = false,cL = false;

    for(auto it : input){
        if(!(sL&&cL)){
            if(it >= 'A'&&it <= 'Z') cL = true;
            else if(it >= 'a'&&it <= 'z') sL = true;
        }
    }

    if(sL&&cL) cout<<"Mix";
    else if(sL) cout<<"All Small Letter";
    else if(cL) cout<<"All Capital Letter";


    return 0;
}
