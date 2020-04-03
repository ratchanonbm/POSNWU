/*
    Task: PR_RottenOranges
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void rotten(int flag){
    if(flag == 0) cout<<"Can rotten all"<<endl;
    else if(flag == 1) cout<<"Can rotten all"<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    int T;
    cin>>T;

    int c[T];

    for(int t=0;t<T;t++){
        int M;  //Row
        int N;  //Column

        cin>>M>>N;

        int flag_rotten = 0;

        int basket[M][N];   //Create Basket M x N

        //Orange Data
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cin>>basket[i][j];  //Input Orange Data
                if(basket[i][j] == 2) flag_rotten = 1;  //Filter Orange in Basket can rotten
            }
        }

        //Debugging check data
        /*cout<<"===== [Basket] ====="<<endl;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout<<basket[i][j]<<" ";  //Input Orange Data
            }
            cout<<endl;
        }*/

        //Filter Again in case near rotten orange don't have any orange
        if(flag_rotten == 1){
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    if(basket[i][j] == 2){
                        //Case in edge
                            //Top row case
                            if(i == 0){
                                //Top row and left col
                                if(j == 0)
                                    if(basket[i][j+1] == 0&&basket[i+1][j] == 0) flag_rotten = 0;
                                //Top Row and right col
                                else if(j == N-1)
                                    if(basket[i][j-1] == 0&&basket[i+1][j] == 0) flag_rotten = 0;
                                //Top row
                                else
                                    if(basket[i][j-1] == 0&&basket[i][j+1] == 0&&basket[i+1][j] == 0) flag_rotten = 0;
                            }
                            //Bottom Row case
                            if(i == M-1){
                                //Bottom row and left col
                                if(j == 0)
                                    if(basket[i][j+1] == 0&&basket[i-1][j] == 0) flag_rotten = 0;    //Right
                                //Bottom Row and right col
                                else if(j == N-1)
                                    if(basket[i][j-1] == 0&&basket[i-1][j] == 0) flag_rotten = 0;    //Left
                                //Bot row
                                else
                                    if(basket[i][j-1] == 0&&basket[i][j+1] == 0&&basket[i-1][j] == 0) flag_rotten = 0;    //Left
                            }
                            //Left Col case but did't in top and bot
                            if(j == 0)
                                if(basket[i][j+1] == 0&&basket[i+1][j] == 0&&basket[i-1][j] == 0) flag_rotten = 0;    //Right
                            //Right Col case but did't in top and bot
                            if(j == N-1)
                                if(basket[i][j-1] == 0&&basket[i+1][j] == 0&&basket[i-1][j] == 0) flag_rotten = 0;    //Left

                        if(i!=0&&i!=M-1&&j!=0&&j!=N-1)
                            if(basket[i+1][j] == 0&&basket[i-1][j] == 0&&basket[i][j-1] == 0&&basket[i][j+1] == 0) flag_rotten = 0;    //Top
                    }
                }
            }
        }

        /*
          If it still can rotten
          Now find day they rotten all
        */
        int day=0;    //store minimum day they rotten all
        if(flag_rotten == 1){
            int more_rotten = 1;

            while (more_rotten == 1){
                day++;
                for(int i=0;i<M;i++){
                    for(int j=0;j<N;j++){
                    //Mark Rotten
                    //Check if this orange rotten
                    if(basket[i][j] == 2){
                        //Case in edge
                            //Top row case
                            if(i == 0){
                                //Top row and left col
                                if(j == 0){
                                    if(basket[i][j+1] != 0) basket[i][j+1] = 3;    //Right
                                    if(basket[i+1][j] != 0) basket[i+1][j] = 3;    //Bottom
                                }
                                //Top Row and right col
                                else if(j == N-1){
                                    if(basket[i][j-1] != 0) basket[i][j-1] = 3;    //Left
                                    if(basket[i+1][j] != 0) basket[i+1][j] = 3;    //Bottom
                                }
                                //Top row
                                else{
                                    if(basket[i][j-1] != 0) basket[i][j-1] = 3;    //Left
                                    if(basket[i][j+1] != 0) basket[i][j+1] = 3;    //Right
                                    if(basket[i+1][j] != 0) basket[i+1][j] = 3;    //Bottom
                                }

                            }
                            //Bottom Row case
                            if(i == M-1){
                                //Bottom row and left col
                                if(j == 0){
                                    if(basket[i][j+1] != 0) basket[i][j+1] = 3;    //Right
                                    if(basket[i-1][j] != 0) basket[i-1][j] = 3;    //Top
                                }
                                //Bottom Row and right col
                                else if(j == N-1){
                                    if(basket[i][j-1] != 0) basket[i][j-1] = 3;    //Left
                                    if(basket[i-1][j] != 0) basket[i-1][j] = 3;    //Top
                                }
                                //Bot row
                                else{
                                    if(basket[i][j-1] == 0) basket[i][j-1] = 3;    //Left
                                    if(basket[i][j+1] == 0) basket[i][j+1] = 3;    //Right
                                    if(basket[i-1][j] == 0) basket[i-1][j] = 3;    //Top
                                }
                            }
                            //Left Col case but did't in top and bot
                            if(j == 0){
                                if(basket[i][j+1] != 0) basket[i][j+1] = 3;    //Right
                                if(basket[i+1][j] != 0) basket[i+1][j] = 3;    //Top
                                if(basket[i-1][j] != 0) basket[i-1][j] = 3;    //Bottom
                            }
                                //Right Col case but did't in top and bot
                            if(j == N-1){
                                if(basket[i][j-1] != 0) basket[i][j-1] = 3;    //Left
                                if(basket[i+1][j] != 0) basket[i+1][j] = 3;    //Top
                                if(basket[i-1][j] != 0) basket[i-1][j] = 3;    //Bottom
                            }
                            //Case not in edge
                            if(i!=0&&i!=M-1&&j!=0&&j!=N-1){
                                if(basket[i+1][j] != 0) basket[i+1][j] = 3;    //Top
                                if(basket[i-1][j] != 0) basket[i-1][j] = 3;    //Bottom
                                if(basket[i][j-1] != 0) basket[i][j-1] = 3;    //Left
                                if(basket[i][j+1] != 0) basket[i][j+1] = 3;    //Right
                            }
                        }
                    }
                }
            //Set mark it rotten
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    if(basket[i][j] == 3) basket[i][j] = 2;
                }
            }


            //Check can rotten more in next time
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    //Check if this orange rotten
                    if(basket[i][j] == 2){
                        //Case in edge
                            //Top row case
                            if(i == 0){
                                //Top row and left col
                                if(j == 0){
                                    if(basket[i][j+1] == 0) more_rotten = 0;    //Right
                                    else if(basket[i+1][j] == 0) more_rotten = 0;    //Bottom
                                }
                                //Top Row and right col
                                else if(j == N-1){
                                    if(basket[i][j-1] == 0) more_rotten = 0;    //Left
                                    else if(basket[i+1][j] == 0) more_rotten = 0;    //Bottom
                                }
                                //Top row
                                else{
                                    if(basket[i][j-1] == 0) more_rotten = 0;    //Left
                                    else if(basket[i][j+1] == 0) more_rotten = 0;    //Right
                                    else if(basket[i+1][j] == 0) more_rotten = 0;    //Bottom
                                }

                            }
                            //Bottom Row case
                            if(i == M-1){
                                //Bottom row and left col
                                if(j == 0){
                                    if(basket[i][j+1] == 0) more_rotten = 0;    //Right
                                    else if(basket[i-1][j] == 0) more_rotten = 0;    //Top
                                }
                                //Bottom Row and right col
                                else if(j == N-1){
                                    if(basket[i][j-1] == 0) more_rotten = 0;    //Left
                                    else if(basket[i-1][j] == 0) more_rotten = 0;    //Top
                                }
                                //Bot row
                                else{
                                    if(basket[i][j-1] == 0) more_rotten = 0;    //Left
                                    else if(basket[i][j+1] == 0) more_rotten = 0;    //Right
                                    else if(basket[i-1][j] == 0) more_rotten = 0;    //Top
                                }
                            }
                            //Left Col case but did't in top and bot
                            if(j == 0){
                                if(basket[i][j+1] == 0) more_rotten = 0;    //Right
                                else if(basket[i+1][j] == 0) more_rotten = 0;    //Top
                                else if(basket[i-1][j] == 0) more_rotten = 0;    //Bottom
                            }
                                //Right Col case but did't in top and bot
                            if(j == N-1){
                                if(basket[i][j-1] == 0) more_rotten = 0;    //Left
                                else if(basket[i+1][j] == 0) more_rotten = 0;    //Top
                                else if(basket[i-1][j] == 0) more_rotten = 0;    //Bottom
                            }
                            //Case not in edge
                            if(i!=0&&i!=M-1&&j!=0&&j!=N-1){
                                if(basket[i+1][j] == 0) more_rotten = 0;    //Top
                                else if(basket[i-1][j] == 0) more_rotten = 0;    //Bottom
                                else if(basket[i][j-1] == 0) more_rotten = 0;    //Left
                                else if(basket[i][j+1] == 0) more_rotten = 0;    //Right
                            }
                        }
                    }
                }
            }
            cout<<"===== [Basket] ====="<<endl;
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<basket[i][j]<<" ";  //Input Orange Data
                }
                cout<<endl;
            }
            //After rotten process Check again they rotten all??
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    if(basket[i][j] == 1) flag_rotten = 0;  //If it didn't rotten all
                }
            }
        }

        if(flag_rotten == 1) c[t] = day;
        else if(flag_rotten == 0) c[t] = -1;


    }

    for(int t=0;t<T;t++) cout<<c[t]<<endl;

    return 0;
}
