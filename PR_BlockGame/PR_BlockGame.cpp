/*
    Task: PR_BlockGame
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    //First Part
    int m;  //Row
    int n;  //Col

    cin>>m>>n;

    int board[m][n];    //Arr Board size m x n

    //Board Data
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char in;
            cin>>in;
            if(in == '#') board[i][j] = 1;                               //Solid Board
            else if(in == '-') board[i][j] = 0;                          //Air
            else if((int)in>=65&&(int)in<=90) board[i][j] = (int)in;    //If Alphabet turn to ASCII
        }
    }

    //For debugging
    //Board Data
    /*cout<<"Check Board Data"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j] == 0) cout<<"- ";
            else if(board[i][j] == 1) cout<<"# ";
            else cout<<(char)board[i][j]<<" ";
        }
        cout<<endl;
    }*/


    //Second Part
    int I;  //Time of move
    cin>>I; //Input I

    int score = 0;

    //Input Move Data
    for(int T=0;T<I;T++){
        int r,c;
        char dir;
        cin>>r>>c>>dir;

        int d;
        if(dir == 'L') d = -1;
        else if(dir == 'R') d = 1;

        //For debugging
        //cout<<"Move "<<board[r][c]<<" to "<<r<<" "<<c+d<<endl;


        //Check What move
        //If position is Solid Board or air can't move or move block but hit board
        if(board[r][c] == 0 || board[r][c] == 1 || board[r][c+d] >= 1){
            //cout<<"Bad Move"<<endl;
            score -= 5; //score minus 5
        } else {

            //Move only
            board[r][c+d] = board[r][c];    //Move to destination
            board[r][c] = 0;                //Set to empty (Air)
            c += d;                         //Set now c for Gravity calculation

            //Gravity
            while(board[r+1][c] == 0){
                //cout<<"Drop"<<endl;
                board[r+1][c] = board[r][c];    //Move to destination
                board[r][c] = 0;                //Set to empty (Air)
                r++;                            //Set now c for Gravity calculation
            }



            //Calculation Score
            int top = 0;
            int bot = 0;
            int left = 0;
            int right = 0;

            top = board[r-1][c];
            bot = board[r+1][c];
            left = board[r][c-1];
            right = board[r][c+1];

            //cout<<"TOP "<<top<<endl;
            //cout<<"BOT "<<bot<<endl;
            //cout<<"LEFT "<<left<<endl;
            //cout<<"RIGHT "<<right<<endl;

            if(top == board[r][c]){
                score+=5;           //Plus score
                board[r-1][c] = 0;  //Clear Block
                //cout<<"TOP"<<endl;
            }
            if(bot == board[r][c]){
                score+=5;           //Plus score
                board[r+1][c] = 0;  //Clear Block
                //cout<<"BOT"<<endl;
            }
            if(left == board[r][c]){
                score+=5;           //Plus score
                board[r][c-1] = 0;  //Clear Block
                //cout<<"LEFT"<<endl;
            }
            if(right == board[r][c]){
                score+=5;           //Plus score
                board[r][c+1] = 0;  //Clear Block
                //cout<<"RIGHT"<<endl;
            }
            if(top == board[r][c]||bot == board[r][c]||left == board[r][c]||right == board[r][c]){
                board[r][c] = 0;
                score+=5;
                //cout<<"SELF"<<endl;
            }
        }
        //Gravity For all
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                int a = i;
                int b = j;
                while(board[a+1][b]==0&&board[a][b]>1){
                    board[a+1][b] = board[a][b];    //Move to destination
                    board[a][b] = 0;                //Set to empty (Air)
                    a++;

                    //Calculation Score
                    int top = 0;
                    int bot = 0;
                    int left = 0;
                    int right = 0;

                    if(a>0)     top = board[a-1][b];
                    if(a<m-1)   bot = board[a+1][b];
                    if(b>0)     left = board[a][b-1];
                    if(b>n-1)   right = board[a][b+1];

                    //cout<<"TOP "<<top<<endl;
                    //cout<<"BOT "<<bot<<endl;
                    //cout<<"LEFT "<<left<<endl;
                    //cout<<"RIGHT "<<right<<endl;

                    if(top == board[a][b]){
                        score+=5;           //Plus score
                        board[a-1][b] = 0;  //Clear Block
                        //cout<<"TOP"<<endl;
                    }
                    if(bot == board[a][b]){
                        score+=5;           //Plus score
                        board[a+1][b] = 0;  //Clear Block
                        //cout<<"BOT"<<endl;
                    }
                    if(left == board[a][b]){
                        score+=5;           //Plus score
                        board[a][b-1] = 0;  //Clear Block
                        //cout<<"LEFT"<<endl;
                    }
                    if(right == board[a][b]){
                        score+=5;           //Plus score
                        board[a][b+1] = 0;  //Clear Block
                        //cout<<"RIGHT"<<endl;
                    }
                    if(top == board[a][b]||bot == board[a][b]||left == board[a][b]||right == board[a][b]){
                        board[a][b] = 0;
                        score+=5;
                        //cout<<"SELF"<<endl;
                    }
                }
            }
        }

        //For debugging
        //New Board Data
        /*cout<<"===== [Board] ====="<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == 0) cout<<"- ";
                else if(board[i][j] == 1) cout<<"# ";
                else cout<<(char)board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<score<<endl;*/

    }
    cout<<score<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j] == 0) cout<<"- ";
            else if(board[i][j] == 1) cout<<"# ";
            else cout<<(char)board[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}
