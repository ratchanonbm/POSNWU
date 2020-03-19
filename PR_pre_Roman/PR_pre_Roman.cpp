#include <iostream>

using namespace std;

int main(){
    int d;
    int sum_i=0,sum_v=0,sum_x=0,sum_l=0,sum_c=0;

    cin>>d;

    for(int p=1;p<=d;p++){
        int n = p;

        //Reset Roman Per Round
        int i=0,v=0,x=0,l=0,c=0;

        c = n/100;
        n %= 100;

        l = n/50;
        n %= 50;

        x = n/10;
        n %= 10;

        v = n/5;
        n %= 5;

        i = n/1;
        n %= 1;

        if(i>3){
            i-=3;
            v++;
        }
        if(v>=2){
            v-=2;
            x++;
        }
        if(x==5){
            x-=4;
            l++;
        }
        if(x>3&&x<5){
            x-=3;
            l++;
        }

        if(l>=2){
            l-=2;
            c++;
        }

        sum_i += i;
        sum_v += v;
        sum_x += x;
        sum_l += l;
        sum_c += c;
    }
    cout<<sum_i<<" "<<sum_v<<" "<<sum_x<<" "<<sum_l<<" "<<sum_c<<endl;

}
