/*
    Task: Covid
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int arr[1000];

int cost(int n){
    int cost = 0;
    for(int i=0;i<1000;i+=n){
        int flag = 0;
        for(int j=i;j<=i+n;j++){
            //cout<<"Process"<<j<<" ";
            if(arr[j] == 1){
                cost += n;     //N Baht
                //cout<<"Found"<<endl;
            } else {
                //cout<<"Not Found"<<endl;
            }
        }
        cost++; //1 Baht
    }
    return cost;

}

void geninput(int rate){
    int c = 0;
    for(int i=0;i<1000;i++){
       if(rand()%1000<rate*10){
            arr[i] = 1;
            c++;
        } else {
            arr[i] = 0;
        }
       //cout<<arr[i]<<endl;
    }
    //cout<<"Real Case :"<<c<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    /* initialize random seed: */
    srand (time(NULL));

    int rate=3;
    int n;
    //cin>>n;
    //cout<<"Input infect rate: ";
    //cin>>rate;

    geninput(rate);
    for(int i=1;i<=10;i++){
        cout<<"Cost "<<i<<" :"<<cost(i)<<endl;
    }


    return 0;
}
