#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int pattern[5000][70];

    int P,Q,R,maxP=0;
    for(int i=0;i<n;i++){
        cin>>P>>Q>>R;
        for(int j=0;j<R;j++){
            pattern[P-1][(Q+j)-1] = 1;
            //cout<<"Add pattern \tRow: "<<P<<"\t Col:"<<Q+j<<endl;

        }
        if(P>maxP) maxP = P;
    }

    //cout<<"Max Row: "<<maxP<<endl;

    for(int i=0;i<maxP;i++){
        for(int j=0;j<70;j++){
            //cout<<"Check Value: \tRow: "<<i<<"\tCol: "<<j<<"\tValue :"<<pattern[P][(Q+j)-1]<<endl;
            if(pattern[i][j]==1) cout<<"x";
            else cout<<"o";
        }
        cout<<endl;
    }

}
