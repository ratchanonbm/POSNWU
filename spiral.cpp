/*
    Task: Spiral Mather fucker
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void gotoxy(short x, short y) {

    COORD pos = {x, y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
int main() {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    int i,j,n = 20,x=40,y = 13,
    dir[4][4] = {{0,-1},{-1,0},{0,1},{1,0}};
    char ch = 219;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            gotoxy(x,y);
            cout<<ch;
            x+=dir[i%4][0];
            y+=dir[i%4][1];
            Sleep(100);
        }
    }

    return 0;
}
