/*
    Task: Distance
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int distance(int town[],int a,int b){
    int dis = 0;
    a--;
    b--;
    if(b < a) {
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i=a;i<b;i++){
        dis += town[i];
    }
    return dis;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int town[] = {1,2,3,4,5,6,7,8,9,10};
    int a;
    int b;
    cin>>a>>b;
    cout<<distance(town,a,b);


    return 0;
}
