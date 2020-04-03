/*
    Task: PR_Plate
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    int Nc;  //Number of class
    int Ns;  //Number of student

    cin>>Nc>>Ns;

    int student[Ns][2];    //Store Student data class and student Id

    //Input Student data
    for(int i=0;i<Ns;i++){
        int c;  //Class
        int s;  //Student Id
        cin>>c>>s;

        //Store Data
        student[i][0] = c;
        student[i][1] = s;
    }

    //For Debugging Cout Student data
    /*for(int i=0;i<Ns;i++){
        cout<<"Class: "<<student[i][0]<<"\tId: "<<student[i][1]<<endl;
    }*/

    //Queue Command
    char com;   //Command

    //First Command Input
    cin>>com;

    //Queue
    int q_student[Ns][2] = {0};

    //Queue index
    int q = 0;

    //Out
    int o_student[Ns];

    //Out index
    int o = 0;


    //While not last command
    while(com != 'X'){
        //Command: E Bring students into the line.
        if(com == 'E'){
            int id;
            int c;
            cin>>id;    //Id for queue

            //Find class of this student Id
            for(int i=0;i<Ns;i++){
                if(student[i][1] == id) c = student[i][0];
            }
            //For Debugging
            //cout<<"Class: "<<c<<"\tId: "<<id<<endl;

            //Insert to Queue
            if(q==0) {
                //cout<<"Insert to Queue 1"<<endl;
                q_student[0][0] = c;
                q_student[0][1] = id;

                q++;

                //New Queue
                //cout<<"===== [New Queue 0] ====="<<endl;
                //for(int i=0;i<q;i++){
                //    cout<<"Class: "<<q_student[i][0]<<"\tId: "<<q_student[i][1]<<endl;
                //}
            } else if(q==1) {
                //cout<<"Insert to Queue 1.1"<<endl;
                q_student[1][0] = c;
                q_student[1][1] = id;

                q++;

                //New Queue
                //cout<<"===== [New Queue 0] ====="<<endl;
                //for(int i=0;i<q;i++){
                //    cout<<"Class: "<<q_student[i][0]<<"\tId: "<<q_student[i][1]<<endl;
                //}
            }else {
                //cout<<"Insert to Queue 2"<<endl;

                int flag = 0;
                for(int i=0;i<q;i++){
                    if(q_student[i][0] == c) {
                            flag = 1;
                            //cout<<"Have friend"<<endl;
                            break;
                    }  //Have student in same class
                }

                //If have student in same class
                if(flag == 1){
                    for(int i=1;i<=q;i++){
                        //Insert student at last in same class
                        if(q_student[i][0] != c&&q_student[i-1][0]==c){
                            //Move array to back
                            //cout<<"Move Array to back"<<endl;
                            for(int j=q;j>i;j--){
                                q_student[j][0] = q_student[j-1][0];
                                q_student[j][1] = q_student[j-1][1];
                            }
                            //Insert
                            q_student[i][0] = c;
                            q_student[i][1] = id;
                            q++;
                            break;
                        } else if(i==q) {
                            //cout<<"Insert End line"<<endl;
                            q_student[q][0] = c;
                            q_student[q][1] = id;
                            q++;
                            break;
                        }
                    }
                } else {
                        //cout<<"Insert End line"<<endl;
                        q_student[q][0] = c;
                        q_student[q][1] = id;
                        q++;
                }

                //New Queue
                //cout<<"===== [New Queue E] ====="<<endl;
                //for(int i=0;i<q;i++){
                //    cout<<"Class: "<<q_student[i][0]<<"\tId: "<<q_student[i][1]<<endl;
                //}
            }
        }

        //Command: D Student Head row out
        if(com == 'D'){
            if(q == 0) cout<<"empty"<<endl;
            else {
                o_student[o] = q_student[0][1];
                //cout<<"Out "<<o<<": "<<o_student[o]<<endl;
                //Move Student forward
                for(int i=0;i<q;i++){
                    q_student[i][0] = q_student[i+1][0];
                    q_student[i][1] = q_student[i+1][1];
                }
                q--;
                //New Queue
                //cout<<"===== [New Queue] ====="<<endl;
                //for(int i=0;i<q;i++){
                //    cout<<"Class: "<<q_student[i][0]<<"\tId: "<<q_student[i][1]<<endl;
                //}

                o++;
            }
        }

        //Next Command
        cin>>com;
    }
    for(int i=0;i<o;i++){
        cout<<o_student[i]<<endl;
    }
    cout<<"0"<<endl;


    return 0;
}
