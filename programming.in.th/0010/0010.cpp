/*
    Task:
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    string str;
    cin>>str;

    int pos = 1;

    for(auto i:str){
        if(i == 'A'){
            if(pos == 1) pos = 2;
            else if(pos == 2) pos = 1;
        }
        else if(i == 'B'){
            if(pos == 2) pos = 3;
            else if(pos == 3) pos = 2;
        }
        else if(i == 'C'){
            if(pos == 1) pos = 3;
            else if(pos == 3) pos = 1;
        }
    }

    cout<<pos;


    return 0;
}
