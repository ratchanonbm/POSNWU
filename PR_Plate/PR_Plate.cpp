#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code

    int Nc; //Classroom
    int Ns; //Student

    cin>>Nc>>Ns;

    int student[Ns];
    int q[Ns];
    int out[Ns];

    //Input Student
    for(int i=0;i<Ns;i++){
        int c,s;
        cin>>c>>s;

        student[i] = s;
    }

    //Queue
    char com;
    cin>>com;
    int i=0;
    while(com != 'X'){
        if(com == 'E'){
            cin>>q[i];
            i++;
        }
        if(com == 'D'){
            cout<<q[0]<<endl;
            //Move Queue
            for(int j=0;j<i-1;j++){
                q[j] = q[j+1];
                //cout<<q[j]<<endl;
            }
            i--;
        }
        cin>>com;
    }
    cout<<"0";


    return 0;
}
