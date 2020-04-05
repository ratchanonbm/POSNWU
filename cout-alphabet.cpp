/*
    Task: Count - Alphabet
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int c[26] = {0};

    string text;
    cin>>text;
    int n = text.length();

    for(int i=0;i<n;i++) c[text[i] - 'A']++;

    for(int i=0;i<26;i++) cout<<char(i + 65)<<": "<<c[i]<<endl;


    return 0;
}
