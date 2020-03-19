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

        while(n>=100){
            //For Debug
            //cout<<"Loop c"<<endl;
            c++;
            n-=100;
        }

        while(n>=50){
            //For Debug
            //cout<<"Loop l"<<endl;
            l++;
            n-=50;
        }

        while(n>=10){
            //For Debug
            //cout<<"Loop x"<<endl;
            x++;
            n-=10;
        }

        while(n>=5){
            //For Debug
            //cout<<"Loop v"<<endl;
            v++;
            n-=5;
        }

        while(n>=1){
            //For Debug
            //cout<<"Loop i"<<endl;
            i++;
            n--;
        }
        //For Debug
        //cout<<"Before If"<<endl;
        //cout<<"I = "<<i<<endl;
        //cout<<"V = "<<v<<endl;
        //cout<<"X = "<<x<<endl;
        //cout<<"L = "<<l<<endl;
        //cout<<"C = "<<c<<endl;

        if(i>=3){
            i-=3;
            v++;
            cout<<"========== If i =========="<<endl;
            cout<<"I = "<<i<<endl;
            cout<<"V = "<<v<<endl;
            cout<<"X = "<<x<<endl;
            cout<<"L = "<<l<<endl;
            cout<<"C = "<<c<<endl;
        }
        if(v>=2){
            v-=2;
            x++;
            cout<<"========== If v =========="<<endl;
            cout<<"I = "<<i<<endl;
            cout<<"V = "<<v<<endl;
            cout<<"X = "<<x<<endl;
            cout<<"L = "<<l<<endl;
            cout<<"C = "<<c<<endl;
        }
        if(x>=4){
            x-=4;
            l++;
            cout<<"========== If x4 =========="<<endl;
            cout<<"I = "<<i<<endl;
            cout<<"V = "<<v<<endl;
            cout<<"X = "<<x<<endl;
            cout<<"L = "<<l<<endl;
            cout<<"C = "<<c<<endl;
        }

        if(l>=2){
            l-=2;
            c++;
            cout<<"========== If l =========="<<endl;
            cout<<"I = "<<i<<endl;
            cout<<"V = "<<v<<endl;
            cout<<"X = "<<x<<endl;
            cout<<"L = "<<l<<endl;
            cout<<"C = "<<c<<endl;
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
