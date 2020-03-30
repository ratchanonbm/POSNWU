/*
    Author : Ratchanon Panmas
    Lang: C++
*/

#include <bits/stdc++.h>
using namespace std;

int sum_str(char str[]){
    int i=0,sum=0;
    while(str[i] != '\0'){
        int n = (int)str[i] - 48;   //ASCII to number
        sum += n;
        i++;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    char number[20];
    cout<<"Enter number: ";
    cin>>number;

    cout<<"Sum: "<<sum_str(number);


    return 0;
}
