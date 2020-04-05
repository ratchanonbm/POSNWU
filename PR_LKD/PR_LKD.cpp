/*
    Task: PR_LKD
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int btd(int n[]) {

    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    for (int i = 7; i > 0; i--) {
        if (n[i] == 1)
            dec_value += base;
        base *= 2;
    }

    return dec_value;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int N;
    cin>>N; //N Line


    char text[N][17];     //Array for store encode data

    for(int i=0;i<N;i++) cin>>text[i];  //Input 16 bit encode

    //For Debugging
    //cout<<"========= [Data] =========="<<endl;
    //for(int i=0;i<N;i++) cout<<"Line "<<i+1<<": "<<text[i]<<endl;


    //Decode Row by row
    int status = 1; //Start Status = 1
    int decode[N][8]; //Store Decode BIN
    for(int i=0;i<N;i++){
        //cout<<"========== [Line"<<i<<"]=========="<<endl;
        for(int j=0;j<8;j++){
            if(text[i][j*2+1] != '\n'){
                //cout<<"Status: "<<status<<"\tDecode: "<<text[i][j*2]<<text[i][j*2+1];
                if(status == 1){
                    //Case 00
                    if(text[i][j*2] == '0' && text[i][j*2+1] == '0') {
                        decode[i][j] = 0;
                        status = 1;         //Status = 1
                    }
                    //Case 11
                    else if(text[i][j*2] == '1' && text[i][j*2+1] == '1') {
                        decode[i][j] = 1;
                        status = 2;         //Change Status = 2
                    }
                }
                else if(status == 2){
                    //Case 10
                    if(text[i][j*2] == '1' && text[i][j*2+1] == '0') {
                        decode[i][j] = 0;
                        status = 3;         //Status = 1
                    }
                    //Case 01
                    else if(text[i][j*2] == '0' && text[i][j*2+1] == '1') {
                        decode[i][j] = 1;
                        status = 4;         //Change Status = 2
                    }
                }
                else if(status == 3){
                    //Case 11
                    if(text[i][j*2] == '1' && text[i][j*2+1] == '1') {
                        decode[i][j] = 0;
                        status = 1;         //Status = 1
                    }
                    //Case 10
                    else if(text[i][j*2] == '0' && text[i][j*2+1] == '0') {
                        decode[i][j] = 1;
                        status = 2;         //Change Status = 2
                    }
                }
                else if(status == 4){
                    //Case 01
                    if(text[i][j*2] == '0' && text[i][j*2+1] == '1') {
                        decode[i][j] = 0;
                        status = 3;         //Status = 1
                    }
                    //Case 10
                    else if(text[i][j*2] == '1' && text[i][j*2+1] == '0') {
                        decode[i][j] = 1;
                        status = 4;         //Change Status = 2
                    }
                }
                //cout<<" = "<<decode[i][j]<<endl;
            }
            else {
                break;
            }
        }
    }

    //For Debugging Decode Data
    for(int i=0;i<N;i++){
        //cout<<"Decode: ";
        for(int j=0;j<8;j++){
            //cout<<decode[i][j];
        }
        //cout<<endl;
    }


    int ASCII_decode[N];    //Store ASCII

    //Translate BIN to ASCII DEC
    for(int i=0;i<N;i++){
        int temp[8];
        int result = btd(decode[i]);

        //Filter Weird char
        if(result>=65&&result<=90)
            ASCII_decode[i] = result;
        else{
            ASCII_decode[i] = 0;
        }
        //cout<<"ASCII: "<<ASCII_decode[i]<<endl;
    }
    for(int i=0;i<N;i++) {
        if(ASCII_decode[i] != 0) cout<<char(ASCII_decode[i]);
    }


    return 0;
}
