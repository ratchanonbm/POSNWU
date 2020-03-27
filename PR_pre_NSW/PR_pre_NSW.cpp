#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int sw;
    int fv,lv;

    char val[255];

    int w[3][9];  //Wheel

    cin>>sw;
    cin>>val;

    //Set Start Value
    w[2][0] = sw%10;
    sw /= 10;
    lv = w[2][0];
    w[1][0] = sw%10;
    sw /= 10;
    w[0][0] = sw%10;
    fv = w[0][0];

    //For Debugging
    //cout<<"Wheel 1: 1\tValue: "<<w[0][0]<<endl;
    //cout<<"Wheel 2: 1\tValue: "<<w[1][0]<<endl;
    //cout<<"Wheel 3: 1\tValue: "<<w[2][0]<<endl;


    //Set value
    for(int i=0;i<3;i++){
        //cout<<"========== Wheel "<<i+1<<"=========="<<endl;
        for(int j=1;j<9;j++){
            if(w[i][j-1]<9) w[i][j] = w[i][j-1] + 1 ;
            else w[i][j] = 1;
            //cout<<"Pos"<<j+1<<"\tValue: "<<w[i][j]<<endl;
        }
    }

    //Value After Encrypt
    char en_val[255];

    int i = 0;
    //Encrypt Value
    while(val[i] != '\0'){
        int n = (int)val[i] - 48;

        //cout<<"Before: "<<n;
        //Encrypt n
        for(int i=0;i<3;i++){
            n = w[i][n-1];
        }
        //cout<<"After: "<<n<<endl;

        //Move First Wheel
        for(int i=0;i<fv;i++){
            //cout<<"Move First Wheel "<<i+1<<endl;
            int temp = w[0][0];
            for(int j=0;j<9;j++){
                w[0][j] = w[0][j+1];
            }
            w[0][8] = temp;
        }

        //Move Second Wheel
        //cout<<"Move Second Wheel "<<endl;
        int temp2 = w[1][8];
        for(int i=8;i>0;i--){
            w[1][i] = w[1][i-1];
        }
        w[1][0] = temp2;

        //Move Third Wheel
        for(int i=0;i<lv;i++){
            //cout<<"Move Third Wheel "<<i+1<<endl;
            int temp = w[2][0];
            for(int j=0;j<9;j++){
                w[2][j] = w[2][j+1];
            }
            w[2][8] = temp;
        }

        //For Debugging
        //cout<<"===== New Value ====="<<endl;
        for(int i=0;i<9;i++){
            for(int j=0;j<3;j++){
                //cout<<w[j][i];
            }
            //cout<<endl;
        }


        en_val[i] = n + 48;
        i++;
    }

    cout<<stoi(en_val);

    return 0;
}
