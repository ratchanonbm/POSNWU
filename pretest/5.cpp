#include <bits/stdc++.h>
using namespace std;

typedef struct{
    int x,y;
}coor;

double dist(coor a,coor b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    coor a={0,0},b={2,2};
    //Start Code
    cout<<dist(a,b);

    return 0;
}
