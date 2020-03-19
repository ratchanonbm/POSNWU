#include <iostream>

using namespace std;

int main() {
    int p;
    cin>>p;
    int sum_i=0,sum_v=0,sum_x=0,sum_l=0,sum_c=0;

    for(int n=1;n<=p;n++){

        //Separate Number
        int H,T,D;
        H = n - (n%100);
        T = n - (H+(n%10));
        D = n%10;
        //cout<<"H : "<<H<<endl<<"T : "<<T<<endl<<"D : "<<D<<endl;

        int i=0,v=0,x=0,l=0,c=0;

        int cH=0;
        int xT=0,lT=0,cT=0;
        int iD=0,vD=0,xD=0;

        //For Hundred Part
        cH = H/100;

        //For Ten Part
        lT = T/50;
        T %= 50;
        xT = T/10;
        if(xT>3) {
            lT++;
            xT-=3;
        }
        if(lT==2){
            cT++;
            lT-=2;
        }

        //For Digit Part
        vD = D/5;
        D %= 5;
        iD = D;
        if(iD>3){
            vD++;
            iD-=3;
        }
        if(vD==2){
            xD++;
            vD-=2;
        }

        //Sum from all part
        i = iD;
        v = vD;
        x = xD + xT;
        l = lT;
        c = cH + cT;

        sum_i += i;
        sum_v += v;
        sum_x += x;
        sum_l += l;
        sum_c += c;

    }
    cout<<sum_i<<" "<<sum_v<<" "<<sum_x<<" "<<sum_l<<" "<<sum_c<<endl;

}
