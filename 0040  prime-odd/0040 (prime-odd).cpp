#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int num;
    int n;

    cin>>n;
    int data[n];
    for(int i=0;i<n;i++){
        int prime=1,odd=1;
        cin>>num;
        if(num%2==0) odd=0;
        if(num<=1) prime=0;
        else {
            for(int i=2;i<sqrt(num);i+=2){
                if(num%i==0) {
                    prime = 0;
                    break;
                }
            }
        }
        if(prime == 1||odd == 1) data[i] = 1;
        else data[i] = 0;
    }

    for(int i=0;i<n;i++){
        if(data[i] == 1) cout<<"T"<<endl;
        else cout<<"F"<<endl;
    }



    return 0;
}
