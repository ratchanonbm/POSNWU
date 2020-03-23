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

    //Have winner flag
    int have_winner = 0; //Default Set to false


    //Attack
    int att;



    //First Attack
    cin>>att;

    //For Debugging
    //cout<<"========== [First Round] =========="<<endl;
    //cout<<"Before Attack\t Odd: "<<power[1]<<"\tEven: "<<power[0]<<endl;

    if(att%2==0) {power[1]--;even_strike++;}    //Even attack odd
    else if(att%2!=0) {power[0]--;odd_strike++;}             //Odd attack even

    //For Debugging
    //if(att%2==0) {cout<<"Even Attack \tAttacker: "<<att<<endl;}    //Even attack odd
    //else {cout<<"Odd Attack \tAttacker: "<<att<<endl;}            //Odd attack even
    //cout<<"After Attack\t Odd: "<<power[1]<<"\tEven: "<<power[0]<<endl;
    //cout<<"Even Strike: "<<even_strike<<"\tOdd Strike: "<<odd_strike<<endl;

    //Attack
    for(int i=2;i<=P*2;i++){
        //For Debugging
        //cout<<"========== ["<<i<<" Attack] =========="<<endl;
        //cout<<"Before Attack\t Odd: "<<power[1]<<"\tEven: "<<power[0]<<endl;

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



        //For Debugging
        //if(att%2==0) {cout<<"Even Attack \tAttacker: "<<att<<endl;}    //Even attack odd
        //else {cout<<"Odd Attack \tAttacker: "<<att<<endl;}            //Odd attack even
        //cout<<"After Attack\t Odd: "<<power[1]<<"\tEven: "<<power[0]<<endl;
        //cout<<"Even Strike: "<<even_strike<<"\tOdd Strike: "<<odd_strike<<endl;

        //Check Attack strike bonus
        if(even_strike>=3) power[1] -= 3;
        else if(odd_strike>=3) power[0] -= 3;



        //For Debugging
        //if(even_strike>=3) {cout<<"Even Strike!!! Even Attack \tDamage: 3"<<endl<<"After Strike\t Odd: "<<power[1]<<"\tEven: "<<power[0]<<endl;}
        //else if(odd_strike>=3) {cout<<"Odd Strike!!! Odd Attack \tDamage: 3"<<endl<<"After Strike\t Odd: "<<power[1]<<"\tEven: "<<power[0]<<endl;}

        //Check First Winner
        if(power[0]<0&&have_winner==0) {
            cout<<"1"<<endl;
            cout<<att<<endl;    // Player Make team win
            have_winner++;      //Set have winner true
        } else if(power[1]<0&&have_winner==0) {
            cout<<"0"<<endl;
            cout<<att<<endl;    // Player Make team win
            have_winner++;      //Set have winner true
        }

    }




    return 0;
}
