#include <iostream>

using namespace std;

int main() {
    while(true){
    int n;
    cin>>n;

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


    cout<<"Before If"<<endl;
    cout<<"I = "<<i<<endl;
    cout<<"V = "<<v<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"L = "<<l<<endl;
    cout<<"C = "<<c<<endl;

    if(i>3){
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
    if(x==5){
        x-=4;
        l++;
        cout<<"========== If x5 =========="<<endl;
        cout<<"I = "<<i<<endl;
        cout<<"V = "<<v<<endl;
        cout<<"X = "<<x<<endl;
        cout<<"L = "<<l<<endl;
        cout<<"C = "<<c<<endl;
    }
    if(x==4){
        x-=3;
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
        //x--;
        c++;
        cout<<"========== If l =========="<<endl;
        cout<<"I = "<<i<<endl;
        cout<<"V = "<<v<<endl;
        cout<<"X = "<<x<<endl;
        cout<<"L = "<<l<<endl;
        cout<<"C = "<<c<<endl;
    }

    cout<<"After If"<<endl;
    cout<<"I = "<<i<<endl;
    cout<<"V = "<<v<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"L = "<<l<<endl;
    cout<<"C = "<<c<<endl;
    cout<<"=================================================="<<endl;
    }
}
