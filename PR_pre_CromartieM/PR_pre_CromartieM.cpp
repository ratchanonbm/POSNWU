#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int N;
    cin>>N;

    //Array for store data
    int data[N][2];

    //Max height
    int maxh;

    //Max S
    int maxs;

    //For input
    int S,H;

    //First Input
    cin>>S;
    cin>>H;

    //Convert to array position
    S--;

    data[0][0] = S;
    data[0][1] = H;

    //Maxh = first input
    maxh = data[0][1];

    //Maxs = first input
    maxs = S + (H*2);

    //For Debugging
    //cout<<"Start: "<<data[0][0]<<"\tHeight: "<<data[0][1]<<endl;
    //cout<<"End:   "<<maxs<<"\tMaxs: "<<maxs<<"\tMaxh: "<<maxh<<endl;


    //Input Data
    for(int i=1;i<N;i++){

        cin>>S>>H;

        //Convert to array position
        S--;

        //Save data
        data[i][0] = S;
        data[i][1] = H;

        if(H>maxh) maxh = H;    //Save Height

        int ends;
        ends = S + (H*2);

        if(ends>maxs) maxs = ends;

        //For Debugging
        //cout<<"Start: "<<data[i][0]<<"\tHeight: "<<data[i][1]<<endl;
        //cout<<"End:   "<<ends<<"\tMaxs: "<<maxs<<"\tMaxh: "<<maxh<<endl;

    }



    //Picture Array
    int pic[maxh][maxs] = {0};

    for(int i=0;i<maxh;i++){
        for(int j=0;j<maxs;j++){
            pic[i][j] = 0;
        }
    }

    //Mark Pic
    for(int i=0;i<N;i++){
        //cout<<"Data"<<i<<endl;
        //cout<<"Start: "<<data[i][0]<<"\tHeight: "<<data[i][1]<<endl;
        for(int j=maxh-data[i][1];j<maxh;j++){
            for(int k=data[i][0];k<data[i][0]+data[i][1]*2;k++){
                if(k==data[i][0]+(maxh-j-1)) {
                    if(pic[j][k] == 2){
                        pic[j][k] = 3;
                        //cout<<"Mark | Row:"<<j<<"\tCol: "<<k<<"\tV Hill"<<endl;
                    }
                    else if(pic[j][k] == 0){
                        pic[j][k] = 1;
                        //cout<<"Mark | Row:"<<j<<"\tCol: "<<k<<"\tLeft Hill"<<endl;

                    }
                }
                if(k==(data[i][0]+(data[i][1]*2)-1)-(maxh-j-1)) {
                    if(pic[j][k] == 1){
                        pic[j][k] = 3;
                        //cout<<"Mark | Row:"<<j<<"\tCol: "<<k<<"\tV Hill"<<endl;
                    }
                    else if(pic[j][k] == 0){
                        pic[j][k] = 2;
                        //cout<<"Mark | Row:"<<j<<"\tCol: "<<k<<"\tRight Hill"<<endl;

                    }
                }
                if(k>data[i][0]+(maxh-j-1)&&k<(data[i][0]+(data[i][1]*2)-1)-(maxh-j-1)){
                    pic[j][k] = 5;
                }
            }
        }
    }

    for(int i=0;i<maxh;i++){
        for(int j=0;j<maxs;j++){
            if(pic[i][j]==1) cout<<"/";
            else if(pic[i][j]==2) cout<<"\\";
            else if(pic[i][j]==3) cout<<"v";
            else if(pic[i][j]==5) cout<<"X";
            else cout<<".";
        }
        cout<<endl;
    }

    return 0;
}
