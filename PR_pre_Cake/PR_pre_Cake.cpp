#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int sum_a=0,sum_b=0,sum_c=0,sum_d=0,sum_e=0;

    for(int i=0;i<n;i++){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        sum_a += a;
        sum_b += b;
        sum_c += c;
        sum_d += d;
        sum_e += e;
    }

    int wCake=0;
    float cake = 0;

        //a Order
        wCake += sum_a;

        //b Order
        while(sum_b!=0){
            if(cake<0.75) {
                wCake++; //Add Cake
                cake = 1; //Reset Cake
                cake -= 0.75; //Use cake
            }
            else cake -= 0.75;
            sum_b--;
            //cout<<"========== [Order B] ========="<<endl;
            //cout<<"Remain order : "<<sum_b<<"\tRemain cake : "<<cake<<endl;
            //cout<<"Now use cake : "<<wCake<<endl;
        }

        //c Order
        while(sum_c!=0){
            if(cake<0.5) {
                wCake++; //Add Cake
                cake = 1; //Reset Cake
                cake -= 0.5; //Use cake
            }
            else cake -= 0.5;
            sum_c--;
            //cout<<"========== [Order C] ========="<<endl;
            //cout<<"Remain order : "<<sum_c<<"\tRemain cake : "<<cake<<endl;
            //cout<<"Now use cake : "<<wCake<<endl;
        }

        //d Order
        while(sum_d!=0){
            if(cake<0.25) {
                wCake++; //Add Cake
                cake = 1; //Reset Cake
                cake -= 0.25; //Use cake
            }
            else cake -= 0.25;
            sum_d--;
            //cout<<"========== [Order D] ========="<<endl;
            //cout<<"Remain order : "<<sum_d<<"\tRemain cake : "<<cake<<endl;
            //cout<<"Now use cake : "<<wCake<<endl;
        }

        //e Order
        while(sum_e!=0){
            if(cake<0.125) {
                wCake++; //Add Cake
                cake = 1; //Reset Cake
                cake -= 0.125; //Use cake
            }
            else cake -= 0.125;
            sum_e--;
            //cout<<"========== [Order E] ========="<<endl;
            //cout<<"Remain order : "<<sum_e<<"\tRemain cake : "<<cake<<endl;
            //cout<<"Now use cake : "<<wCake<<endl;
        }

    cout<<wCake;
}
