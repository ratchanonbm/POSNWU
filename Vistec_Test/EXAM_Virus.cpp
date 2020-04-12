/*
TASK: virus
LANG: C++
AUTHOR: YourName YourLastName
CENTER: WU
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int m;
    cin>>m;

    int code_input;
    cin>>code_input;

    int sum_move = 0;

    for(int i=m;i>0;i--){
        sum_move += code_input % 10;
        code_input /= 10;
    }

    int n;
    cin>>n;



    for(int i=0;i<n;i++){
        string word;
        cin>>word;
        for(auto j = word.begin();j != word.end();j++){

            if(*j + sum_move > 'Z'){
                *j = 'A' + ((*j+sum_move) - 'Z') - 1;
            }
            else *j = *j+sum_move;
        }
        cout<<word;
        cout<<"\n";
    }


    return 0;
}
