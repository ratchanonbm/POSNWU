#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int num,prime=1;
    cin>>num;
    if(num<=1) prime=0;
    else {
        for(int i=2;i<sqrt(num);i++){
            if(num%i==0) {
                prime = 0;
                break;
            }
        }
    }
    if(prime == 1) cout<<"yes";
    else cout<<"no";
}


