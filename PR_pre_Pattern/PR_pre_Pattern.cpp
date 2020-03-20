#include <iostream>

using namespace std;

int main() {
    int N;
    cin>>N;

    int pat[5000][70];

    int maxRow=0;

    //Receive Data N line
    for(int i=0;i<N;i++){
        int P,Q,R;
        cin>>P>>Q>>R;

        //Make Pattern Value to 2D array position
        P--;
        Q--;

        //Mark The Pattern
        for(int j=0;j<R;j++){
            pat[P][Q+j] = 1;
        }
        if(P>maxRow) maxRow = P;
    }

    //Print Pattern
    for(int i=0;i<=maxRow;i++){
        cout<<"Row - "<<i+1<<" | ";
        for(int j=0;j<70;j++){
            if(pat[i][j]==1) cout<<"x"; //If mark print x
            else cout<<"o"; //If not mark print o
        }
        //End Row Newline
        cout<<endl;
    }

}
