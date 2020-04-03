/*
    Task: PR_Bee
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int year;   //For input

    //First input
    cin>>year;

    while(year != -1){
        //Bee start
        int B1 = 1;
        int B2 = 1;
        int B3 = 0;



        for(int i=1;i<=year;i++){
            //For Debugging
            //cout<<"========== [BEE] =========="<<endl;
            //cout<<"Year :"<<i<<endl;
            //cout<<"B1: "<<B1<<"\tB2: "<<B2<<"\tB3: "<<B3<<endl;

            int pB2=0,pB3=0;

            //Born From B1
            if(B1>0){
                pB2 += B1;
            }
            //For Debugging
            //cout<<"pB2: "<<pB2<<"\tpB3: "<<pB3<<endl;

            //Born From B2
            if(B2>0){
                pB2 += B2;
                pB3 += B2;
            }
            //For Debugging
            //cout<<"pB2: "<<pB2<<"\tpB3: "<<pB3<<endl;

            //Born From B3
            if(B3>0){
                pB2 += B3;
            }
            //For Debugging
            //cout<<"pB2: "<<pB2<<"\tpB3: "<<pB3<<endl;


            //Kill B2 and B3
            B2 -= B2;
            B3 -= B3;

            //For Debugging
            //cout<<"B1: "<<B1<<"\tB2: "<<B2<<"\tB3: "<<B3<<endl;

            //Sum Baby Bee
            B2 += pB2;
            B3 += pB3;

            //For Debugging
            //cout<<"pB2: "<<pB2<<"\tpB3: "<<pB3<<endl;
            //cout<<"B1: "<<B1<<"\tB2: "<<B2<<"\tB3: "<<B3<<endl;
            //cout<<"Sum: "<<B1+B2+B3<<endl;

        }


        //Output
        cout<<B2<<" ";
        cout<<B1+B2+B3<<endl;

        //Next Input
        cin>>year;
    }


    return 0;
}
