/*
    Task: Rabin
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void rabin(char str[],char pat[]) {
        int n = strlen(str);
        int m = strlen(pat);
        int i, j;
        int s = 0, p = 0;
        int pm = 256;
        int q = 101;
        int h = 1;
        int flag = 0;

        for (i=0;i<m-1;i++)
            h = (h * pm) % q;

        for (i=0;i<m;i++) {
            s = (pm * s + str[i]) % q;
            p = (pm * p + pat[i]) % q;
        }

        for (i=0;i<=n-m;i++) {
            if (s == p) {
                for (j=0;j < m; j++)
                    if (str[i+j] != pat[j])
                        break;
                if (j == m) {
                    cout<<"found at : "<<i+1<<endl;
                    flag = true;
                }
            }
            s = (pm * (s - h * str[i]) + str[i+m]) % q;
            if (s < 0)
                s = s + q;
        }
        if (flag == 0)
            cout<<"not found"<<endl;
        return;

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    char str[] = "QWERTYUIOIUYTREFTRGIOOIIOO";
    char ptr[] = "IO";

    rabin(str,ptr);



    return 0;
}
