#include <bits/stdc++.h>
using namespace std;

int c = 0;

int jump(int a,int b,int c){
    int db,dc;
    db = b-a-1;
    dc = c-b-1;
    if(db==0||dc==0){
        cout<<"No Space";
    }
    else if(a>b)
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(c-b-1,b-a-1);
    return 0;
}
