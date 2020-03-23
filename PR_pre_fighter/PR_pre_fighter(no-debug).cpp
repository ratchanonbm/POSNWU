#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int P;
    cin>>P;

    //Set the initial power of both sides equal input P
    int power[2];
    power[0] = P;
    power[1] = P;

    //Attack Strike
    int odd_strike = 0;
    int even_strike = 0;

    //Attack
    int att;

    //First Attack
    cin>>att;

    if(att%2==0) {power[1]--;even_strike++;}             //Even attack odd
    else if(att%2!=0) {power[0]--;odd_strike++;}         //Odd attack even

    //Attack
    for(int i=2;i<=P*2;i++){

        cin>>att;
        if(att%2==0) power[1]--;    //Even attack odd
        else if(att%2!=0) power[0]--;            //Odd attack even

        //Even Number
        if(even_strike>=1&&att%2==0){even_strike++;}     //If have strike add strike
        else if(even_strike==0&&att%2==0) even_strike=1; //If before this number no strike add this first strike
        else if(att%2!= 0) even_strike=0;                //Clear Strike

        //Odd Number
        if(odd_strike>=1&&att%2!=0){odd_strike++;}       //If have strike add strike
        else if(odd_strike==0&&att%2!=0) odd_strike=1;   //If before this number no strike add this first strike
        else if(att%2== 0) odd_strike=0;                 //Clear Strike

        //Check Attack strike bonus
        if(even_strike>=3) power[1] -= 2;
        else if(odd_strike>=3) power[0] -= 2;

        //Check Winner
        if(power[0]=<0) {
            cout<<"1"<<endl;
            cout<<att;    // Player Make team win
            break;
        } else if(power[1]=<0) {
            cout<<"0"<<endl;
            cout<<att;    // Player Make team win
            break;
        }
    }

    return 0;
}
