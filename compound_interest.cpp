#include <bits/stdc++.h>
using namespace std;

double ci(double money,int year){
    if(year>=1){
        return ci(money*1.04, year-1);
    }
    else return 1.04*money;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int y,m;
    cin>>m>>y;
    cout<<ci(m,y);


    return 0;
}
