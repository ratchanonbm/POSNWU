/*
    Task: dnaSeq
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int naive(char* T, char* P) {
    int n = strlen(T);  //Length Text
    int m = strlen(P);  //Length Pattern

    int match = 0;      //Match Count

    //Loop Check
    for (int i = 0;i <= n - m;i++) {
        int j = 0;
        for (j;j < m;j++) {
            if (T[i + j] != P[j]) break;
        }
        if (j == m) {
            cout<<"Found at Index: "<<i<<endl;
            match++;
        }
    }
    return match;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char T[1000];
    char P[] =  "GCGCA";

    //Start Code
    ifstream dna;
    dna.open("dnaSeq.txt");

    int i = 0;

    while (!dna.eof()){
        dna.get(T[i]);
        i++;
    }

    //cout<<T;

    cout<<naive(T,P);


    return 0;
}
