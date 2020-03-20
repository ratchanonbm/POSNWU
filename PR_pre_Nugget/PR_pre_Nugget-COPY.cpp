#include<iostream>

using namespace std;

bool check(int num){
    cout<<"Recursive"<<num<<endl;
    int Six = num - 6;
    int Nine = num - 9;
    int Twen = num - 20;
    if (Six == 0) return true;
    else if (Nine == 0) return true;
    else if (Twen == 0) return true;
    else if (Six < 0) return false;
    return check(Six) || check(Nine) || check(Twen);
}
int main(){
    int n,i,c=0;

    cin>>n;
    check(n);

    /*for(i=1;i<=n;i++)
        if(check(i)){
            cout<<i<<endl;
            c++;
    }
    if(c==0) cout<<"no";
    return 0;*/
}
