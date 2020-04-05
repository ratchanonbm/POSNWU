/*
    Task: Encrypt Davinci
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void dtb(int n,int bin[]) {
    bin[0] = 0;
    int i = 7;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i--;
    }
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    char letter;
    char encrypt[30];

    cin>>letter;

    cout<<"========== [Data] =========="<<endl;
    cout<<"Letter: "<<letter<<endl;

    //Char to ASCII
    int ascii = (int)letter;
    cout<<"ASCII: "<<ascii<<endl;


    //ASCII to Binary
    int bin[8];
    dtb(ascii,bin);
    cout<<"Binary: ";
    for(int i=0;i<8;i++) cout<<bin[i];
    cout<<endl;

    //Let's Encrypt
    //char encrypt[20];
    cout<<"========== [Encrypt] =========="<<endl;
    int status = 1;
    int i=0;
    for(i;i<8;i++) {
        cout<<(i+1)*2<<" ";

        int n = bin[i];
        if(status == 1){
            if(n == 0){
                status = 1;         //Status 1
                cout<<"S"<<status;
                cout<<" 00"<<endl;
            }
            if(n == 1){
                status = 2;         //Status 2
                cout<<"S"<<status;
                cout<<" 11"<<endl;
            }
        }
        else if(status == 2){
            if(n == 0){
                status = 3;         //Status 1
                cout<<"S"<<status;
                cout<<" 10"<<endl;
            }
            if(n == 1){
                status = 4;         //Status 2
                cout<<"S"<<status;
                cout<<" 01"<<endl;
            }
        }
        else if(status == 3){
            if(n == 0){
                status = 1;         //Status 1
                cout<<"S"<<status;
                cout<<" 11"<<endl;
            }
            if(n == 1){
                status = 2;         //Status 2
                cout<<"S"<<status;
                cout<<" 00"<<endl;
            }
        }
        else if(status == 4){
            if(n == 0){
                status = 3;         //Status 1
                cout<<"S"<<status;
                cout<<" 01"<<endl;
            }
            if(n == 1){
                status = 4;         //Status 2
                cout<<"S"<<status;
                cout<<" 10"<<endl;
            }
        }
    }
    while(status != 1){
        cout<<(i+1)*2<<" ";
        if(status == 2){
            status = 3;
            cout<<"S"<<status;
            cout<<" 10"<<endl;
        }
        else if(status == 3){
            status = 1;
            cout<<"S"<<status;
            cout<<" 11"<<endl;
        }
        else if(status == 4){
            status = 3;
            cout<<"S"<<status;
            cout<<" 01"<<endl;
        }
        i++;
    }


    return 0;
}
