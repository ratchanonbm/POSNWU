/*
    Task: PR_RottenOranges
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void more(int flag){
    if(flag == 1) cout<<"Can more rotten"<<endl;
    else if(flag == 0) cout<<"Can't more rotten"<<endl;

}

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
        int r_c = 0;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cin>>basket[i][j];  //Input Orange Data
                if(basket[i][j] == 2) {
                        flag_rotten = 1;  //Filter Orange in Basket can rotten
                        r_c++;
                }
            }
        }
        if(r_c == M*N) flag_rotten = 2;

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
                        //cout<<"Check: "<<i<<" "<<j<<endl;
                            int top = -1;
                            int bot = -1;
                            int left = -1;
                            int right = -1;

                            if(i!=0) top = basket[i-1][j];       //Can find top
                            if(i!=M-1) bot = basket[i+1][j];     //Can find bottom
                            if(j!=0) left = basket[i][j-1];      //Can find left
                            if(j!=N-1) right = basket[i][j+1];   //Can find right

                            if(top==-1){
                                //Top left
                                if(left==-1){
                                    if(bot!=1&&right!=1) flag_rotten = 0;
                                }
                                //Top right
                                else if(right==-1){
                                    if(bot!=1&&left!=1) flag_rotten = 0;
                                }
                                //Top
                                else{
                                    if(bot!=1&&right!=1&&left!=1) flag_rotten = 0;
                                }
                            }
                            else if(bot==-1){
                                //Bottom left
                                if(left==-1){
                                    if(top!=1&&right!=1) flag_rotten = 0;
                                }
                                //Bottom right
                                else if(right==-1){
                                    if(top!=1&&left!=1) flag_rotten = 0;
                                }
                                //Bottom
                                else{
                                    if(top!=1&&right!=1&&left!=1) flag_rotten = 0;
                                }
                            }
                            else{
                                //Normal position
                                if(top!=1&&bot!=1&&right!=1&&left!=1) flag_rotten = 0;
                            }
                    }
                }
            }
        }

        //If it still can rotten Now find day they rotten all

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
                        //cout<<"Rotten at"<<i<<" "<<j<<endl;
                            int top = -1;
                            int bot = -1;
                            int left = -1;
                            int right = -1;

                            if(i!=0) top = basket[i-1][j];       //Can find top
                            if(i!=M-1) bot = basket[i+1][j];     //Can find bottom
                            if(j!=0) left = basket[i][j-1];      //Can find left
                            if(j!=N-1) right = basket[i][j+1];   //Can find right

                            if(top!=-1&&top==1) basket[i-1][j] = 3;
                            if(bot!=-1&&bot==1) basket[i+1][j] = 3;
                            if(left!=-1&&left==1) basket[i][j-1] = 3;
                            if(right!=-1&&right==1) basket[i][j+1] = 3;
                        }
                    }
                }
            /*cout<<"===== [Basket After] ====="<<endl;
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<basket[i][j]<<" ";  //Input Orange Data
                }
                cout<<endl;
            }*/


            //Set mark it rotten
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    if(basket[i][j] == 3) basket[i][j] = 2;
                }
            }


            int all_rotten = 0;
            int cant_rotten = 0;
            //Check can rotten more in next time
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    //Check if this orange rotten
                    if(basket[i][j] == 2){
                        all_rotten++;
                        //Case in edge
                            //cout<<"Check: "<<i<<" "<<j<<endl;
                            int top = -1;
                            int bot = -1;
                            int left = -1;
                            int right = -1;

                            if(i!=0) top = basket[i-1][j];       //Can find top
                            if(i!=M-1) bot = basket[i+1][j];     //Can find bottom
                            if(j!=0) left = basket[i][j-1];      //Can find left
                            if(j!=N-1) right = basket[i][j+1];   //Can find right

                            if(top==-1){
                                //Top left
                                if(left==-1){
                                    if(bot!=1&&right!=1) cant_rotten++;
                                }
                                //Top right
                                else if(right==-1){
                                    if(bot!=1&&left!=1) cant_rotten++;
                                }
                                //Top
                                else{
                                    if(bot!=1&&right!=1&&left!=1) cant_rotten++;
                                }
                            }
                            else if(bot==-1){
                                //Bottom left
                                if(left==-1){
                                    if(top!=1&&right!=1) cant_rotten++;
                                }
                                //Bottom right
                                else if(right==-1){
                                    if(top!=1&&left!=1) cant_rotten++;
                                }
                                //Bottom
                                else{
                                    if(top!=1&&right!=1&&left!=1) cant_rotten++;
                                }
                            }
                            else{
                                //Normal position
                                if(top!=1&&bot!=1&&right!=1&&left!=1) cant_rotten++;
                            }

                        }
                    }
                }
                if(cant_rotten == all_rotten) more_rotten = 0;
                //more_rotten = 0;
                //cout<<"All Rotten: "<<all_rotten<<"\tCan't rotten: "<<cant_rotten <<endl;
                //more(more_rotten);

            }
            /*cout<<"===== [Basket] ====="<<endl;
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    cout<<basket[i][j]<<" ";  //Input Orange Data
                }
                cout<<endl;
            }*/
            //After rotten process Check again they rotten all??
            for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                    if(basket[i][j] == 1) flag_rotten = 0;  //If it didn't rotten all
                }
            }
        }

        if(flag_rotten == 1) c[t] = day;
        else if(flag_rotten == 0) c[t] = -1;
        else if(flag_rotten == 2) c[t] = 0;


    }

    for(int t=0;t<T;t++) cout<<c[t]<<endl;

    return 0;
}
