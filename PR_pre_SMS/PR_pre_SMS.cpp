#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int N;
    cin>>N;

    char text[N];

    //Data
    char key [9][4] = {
                        {},{'A','B','C'},{'D','E','F'},
                        {'G','H','I'},{'J','K','L'},{'M','N','O'},
                        {'P','Q','R','S'},{'T','U','V'},{'W','X','Y','Z'}
                       };

    //Position
    int pos;

    //Cursor for typing
    int cursor = 0;

    //First Letter
    if(N>0){
        int S,M1;
        cin>>S>>M1;

        //Save current position
        pos = S;
        //cout<<"Now position: "<<pos<<endl;


        //Delete key
        if(pos==1){
            for(int j=0;j<M1&&cursor>0;j++){
                    //cout<<"Delete!!"<<endl; //For Debugging
                    cursor--;
                }
                //cout<<"Now Cursor: "<<cursor<<endl;
        } else {
        //Letter key
            if(pos==7||pos==9) {M1--; M1 %= 4;} //7 and 9 have 4 letter in 1 button
            else {M1--;M1 %= 3;}                //other have 3 letter in 1 button

            text[cursor] = key[pos-1][M1];      //Use alphabet data from array

            //For Debugging
            //cout<<cursor+1<<" Letter: "<<text[cursor]<<endl;
            cursor++;//Finish typing move cursor
            }
    }
    //End First Input

    //Input 2 - N Letter

        for(int i=1;i<N;i++){
            //For Debugging
            //cout<<"========== ["<<i+1<<" Press] =========="<<endl;
            //cout<<"Cursor: "<<cursor+1<<endl;

            int H; //Horizon Move
            int V; //Vertical Move
            int M; //Times in Pressing button
            cin>>H>>V>>M;

            //Convert move to current position
            pos = pos + (H*1) + (V*3);
            //cout<<"Now position: "<<pos<<"\tPress: "<<M<<endl;

            //Delete key
            if(pos==1){

                for(int j=0;j<M&&cursor>0;j++){
                    //cout<<"Delete!!"<<endl; //For Debugging
                    cursor--;
                }
                //cout<<"Now Cursor: "<<cursor<<endl;

            } else {
            //Letter key
                if(pos==7||pos==9) {M--; M %= 4;} //7 and 9 have 4 letter in 1 button
                else {M--;M %= 3;}                //other have 3 letter in 1 button

                text[cursor] = key[pos-1][M];      //Use alphabet data from array

                //For Debugging
                //cout<<cursor+1<<" Letter: "<<text[cursor]<<endl;

                cursor++;//Finish typing move cursor
            }
        }

        //cout<<"========== [Final text] ========="<<endl;
        if(cursor==0) cout<<"null";
        for(int i=0;i<cursor;i++){
            cout<<text[i];
        }


    return 0;
}
