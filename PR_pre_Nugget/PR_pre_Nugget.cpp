#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int gNum;

    if(n<6) cout<<"no";
    else{
        for(int nn=6;nn<=n;nn++){
            //cout<<"=========== Now Check: "<<nn<<" =========="<<endl;
            if(nn==6||nn==9||nn==20) {cout<<nn<<endl;}
            else if(nn>43) {cout<<nn<<endl;}
            else {
                for(int i=0;i<nn;i++){
                    for(int j=0;j<nn;j++){
                        for(int k=0;k<nn;k++){
                            gNum = (6*k) + (9*j) + (20*i);
                            //cout<<"Now I:"<<i<<"\tNow J:"<<j<<"\tNow K:"<<k<<endl;
                            //cout<<"Value gNum"<<gNum<<endl;
                            if(nn==gNum) {cout<<nn<<endl;break;}
                            //PgNum = gNum;
                        }
                        if(nn==gNum) {break;}
                    }
                    if(nn==gNum) {break;}
                }
            }
        }

    }


}
