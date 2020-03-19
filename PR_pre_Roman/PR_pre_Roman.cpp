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


        //cout<<"Before If"<<endl;
        //cout<<"I = "<<i<<endl;
        //cout<<"V = "<<v<<endl;
        //cout<<"X = "<<x<<endl;
        //cout<<"L = "<<l<<endl;
        //cout<<"C = "<<c<<endl;

        if(i>3){
            i-=3;
            v++;
            //cout<<"========== If i =========="<<endl;
            //cout<<"I = "<<i<<endl;
            //cout<<"V = "<<v<<endl;
            //cout<<"X = "<<x<<endl;
            //cout<<"L = "<<l<<endl;
            //cout<<"C = "<<c<<endl;
        }
        if(v>=2){
            v-=2;
            x++;
            //cout<<"========== If v =========="<<endl;
            //cout<<"I = "<<i<<endl;
            //cout<<"V = "<<v<<endl;
            //cout<<"X = "<<x<<endl;
            //cout<<"L = "<<l<<endl;
            //cout<<"C = "<<c<<endl;
        }
        if(x==5){
            x-=4;
            l++;
            //cout<<"========== If x5 =========="<<endl;
            //cout<<"I = "<<i<<endl;
            //cout<<"V = "<<v<<endl;
            //cout<<"X = "<<x<<endl;
            //cout<<"L = "<<l<<endl;
            //cout<<"C = "<<c<<endl;
        }
        if(x>3&&x<5){
            x-=3;
            l++;
            //cout<<"========== If x3 !5 =========="<<endl;
            //cout<<"I = "<<i<<endl;
            //cout<<"V = "<<v<<endl;
            //cout<<"X = "<<x<<endl;
            //cout<<"L = "<<l<<endl;
            //cout<<"C = "<<c<<endl;
        }

        if(l>=2){
            l-=2;
            c++;
            //cout<<"========== If l =========="<<endl;
            //cout<<"I = "<<i<<endl;
            //cout<<"V = "<<v<<endl;
            //cout<<"X = "<<x<<endl;
            //cout<<"L = "<<l<<endl;
            //cout<<"C = "<<c<<endl;
        }
        //For Debug
        //cout<<"After If"<<endl;
        //cout<<"I = "<<i<<endl;
        //cout<<"V = "<<v<<endl;
        //cout<<"X = "<<x<<endl;
        //cout<<"L = "<<l<<endl;
        //cout<<"C = "<<c<<endl;

        sum_i += i;
        sum_v += v;
        sum_x += x;
        sum_l += l;
        sum_c += c;

        //For Debug
        cout<<"Page:"<<p<<endl;
        cout<<"I = "<<i<<endl;
        cout<<"V = "<<v<<endl;
        cout<<"X = "<<x<<endl;
        cout<<"L = "<<l<<endl;
        cout<<"C = "<<c<<endl;

    }
    //For Debug
    //cout<<"Conclude: "<<endl;
    //cout<<"I = "<<sum_i<<endl;
    //cout<<"V = "<<sum_v<<endl;
    //cout<<"X = "<<sum_x<<endl;
    //cout<<"L = "<<sum_l<<endl;
    //cout<<"C = "<<sum_c<<endl;
    cout<<sum_i<<" "<<sum_v<<" "<<sum_x<<" "<<sum_l<<" "<<sum_c<<endl;

}
