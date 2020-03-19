#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int i=0,v=0,x=0,l=0,c=0;
    while(n>=100){
        cout<<"Loop c"<<endl;
        c++;
        n-=100;
        cout<<"Now num: "<<n<<endl;
    }

    while(n>=50){
        cout<<"Loop l"<<endl;
        l++;
        n-=50;
        cout<<"Now num: "<<n<<endl;
    }

    while(n>=10){
        cout<<"Loop x"<<endl;
        x++;
        n-=10;
        cout<<"Now num: "<<n<<endl;
    }

    while(n>=5){
        cout<<"Loop v"<<endl;
        v++;
        n-=5;
        cout<<"Now num: "<<n<<endl;
    }

    while(n>=1){
        cout<<"Loop i"<<endl;
        i++;
        n--;
        cout<<"Now num: "<<n<<endl;
    }
    cout<<"Before If"<<endl;
    cout<<"I = "<<i<<endl;
    cout<<"V = "<<v<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"L = "<<l<<endl;
    cout<<"C = "<<c<<endl;

    if(i>=4){
        cout<<"========== If i =========="<<endl;
        cout<<"I = "<<i<<endl;
        cout<<"V = "<<v<<endl;
        cout<<"X = "<<x<<endl;
        cout<<"L = "<<l<<endl;
        cout<<"C = "<<c<<endl;
        i-=3;
        v++;
    }
    if(v>=2){
        cout<<"========== If v =========="<<endl;
        cout<<"I = "<<i<<endl;
        cout<<"V = "<<v<<endl;
        cout<<"X = "<<x<<endl;
        cout<<"L = "<<l<<endl;
        cout<<"C = "<<c<<endl;
        v-=2;
        x++;
    }
    if(x>=3){
        cout<<"========== If x =========="<<endl;
        cout<<"I = "<<i<<endl;
        cout<<"V = "<<v<<endl;
        cout<<"X = "<<x<<endl;
        cout<<"L = "<<l<<endl;
        cout<<"C = "<<c<<endl;
        x-=5;
        l++;
    }
    if(l>=2){
        cout<<"========== If l =========="<<endl;
        cout<<"I = "<<i<<endl;
        cout<<"V = "<<v<<endl;
        cout<<"X = "<<x<<endl;
        cout<<"L = "<<l<<endl;
        cout<<"C = "<<c<<endl;
        l-=2;
        c++;
    }
    cout<<"After If"<<endl;
    cout<<"I = "<<i<<endl;
    cout<<"V = "<<v<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"L = "<<l<<endl;
    cout<<"C = "<<c<<endl;
}
