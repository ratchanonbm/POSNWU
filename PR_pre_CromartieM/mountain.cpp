#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int H;
    cin>>H;

    cout<<" ";
    for(int i=0;i<H*2;i++){
        cout<<i;
    }
    cout<<endl;


    for(int i=1;i<=H;i++){
        //Print Front Space
        cout<<i;
        for(int j=1;j<=H-i;j++){
            cout<<".";
        }

        //Print Pattern
        for(int j=1;j<=i*2;j++){
            if(j==1) cout<<"/";             //Left hill
            else if(j==i*2) cout<<"\\";     //Right hill
            else cout<<"X";                 //Forest
        }

        //Print Back Space
        for(int j=1;j<=H-i;j++){
            cout<<".";
        }

        cout<<endl;
    }

    return 0;
}
