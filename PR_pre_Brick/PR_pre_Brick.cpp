#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int N,M;
    cin>>N>>M;

    //cout<<"========== [Table] =========="<<endl;
    //cout<<"Row: "<<N<<" row\tCol: "<<M<<" col"<<endl;

    //Create Table
    int table[N][M] = {0};

    for(int i=0;i<N;i++){
        char mark[M];
        cin>>mark;

        for(int j=0;j<M;j++){
            if(mark[j]== 'O') table[i][j] = 1;
            else table[i][j] = 0;
        }
    }

    //cout<<"========== [Table Value] =========="<<endl;
    //for(int i=0;i<N;i++){
    //   for(int j=0;j<M;j++){
    //        cout<<"Row: "<<i<<"\tCol: "<<j<<"\tValue: "<<table[i][j]<<endl;
    //    }
    //}

    //cout<<"========== [Test Table] =========="<<endl;
    //for(int i=0;i<N;i++){
    //   for(int j=0;j<M;j++){
    //        if(table[i][j]==1) cout<<"O";
    //        else if(table[i][j]==3) cout<<"#";
    //        else if(table[i][j]==0) cout<<".";
    //    }
    //   cout<<endl;
    //}


    int brick[M];

    //Input Brick
    for(int i=0;i<M;i++){
        cin>>brick[i];
    }

    //Test Brick
    //for(int i=0;i<M;i++){
    //    cout<<brick[i]<<" ";
    //}


    //This Code place Brick col by col from bottom to top
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){

            //If have obstruction start place brick above until top
            if(table[j][i] == 1){
                //Place Brick until top
                for(int k=j-1;k>(j-1)-brick[i]&&k>=0;k--){
                    //set brick place status
                    table[k][i] = 3;
                }
                break;
              //If it reach bottom of table start place brick
            } else if(j==N-1){
                //Place Brick until no more brick or until top
                for(int k=j;k>j-brick[i]&&k>=0;k--){
                    //set brick place status
                    table[k][i] = 3;
                }
            }
        }
    }

    //cout<<"========== [Table Value] =========="<<endl;
    //for(int i=0;i<N;i++){
    //   for(int j=0;j<M;j++){
    //        cout<<"Row: "<<i<<"\tCol: "<<j<<"\tValue: "<<table[i][j]<<endl;
    //    }
    //}

    //cout<<"========== [Final Table] =========="<<endl;
    for(int i=0;i<N;i++){
       for(int j=0;j<M;j++){
            if(table[i][j]==1) cout<<"O";
            else if(table[i][j]==3) cout<<"#";
            else if(table[i][j]==0) cout<<".";
        }
       cout<<endl;
    }

    return 0;
}
