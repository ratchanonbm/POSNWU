#include <bits/stdc++.h>
using namespace std;

int change_coin(int coin[], int m,int v){
    int n_coin;
    int min_c = v;
    for(int i=0;i<m;i++){
        if(v == coin[i]) return 1;
        else {
            if(coin[i]<=v){
                n_coin = 1 + change_coin(coin,m,v - coin[i]);
            }
        }
    }
    return min(min_c,n_coin);
}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    int v,m;
    cout<<"Value: ";
    cin>>v;
    cout<<"Number of coins: ";
    cin>>m;

    int coin[m];

    //Input Value of coin
    for(int i=0;i<m;i++){
        cout<<"Coin "<<i+1<<": ";
        cin>>coin[i];
    }

    cout<<"Min coin: "<<change_coin(coin,m,v);

    //Debugging
    /*cout<<"Value: "<<v<<endl<<"Number of coin: "<<m<<endl;
    for(int i=0;i<m;i++){
        cout<<coin[i]<<" ";
    }*/


    return 0;
}
