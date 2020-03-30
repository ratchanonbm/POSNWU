#include <bits/stdc++.h>
using namespace std;

void int_to_str(int n){
    char res[20];    //Create String

    int i=0;
    if(n==0) cout<<" ";
    else{
       while(n>0){
            res[i] = (n%10)+48; //ASCII to char
            n /= 10;
            i++;
        }
        cout<<res;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int v;
    cin>>v;

    int_to_str(v);

    return 0;
}
