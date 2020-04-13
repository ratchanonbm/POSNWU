/*
    Task: 0006-Soundex
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int N;
    cin>>N;

    for(int n=0;n<N;n++){
        string str1,str2;
        cin>>str1;
        cin>>str2;
        for(int i=1;i<str1.size();i++){
            if(str1[i] == 'b'||str1[i] == 'f'||str1[i] == 'p'||str1[i] == 'v')
                str1[i] = 1
        }
    }


    return 0;
}
