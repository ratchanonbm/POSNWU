#include <iostream>

using namespace std;

int main(){
    int W,H,n;
    int f_50=0,f_100=0;

    cin>>W>>H>>n;

    int windows[W] = {0};
    //cout<<"Window width: "<<W<<"Meter(s)"<<endl;

    for(int i=0;i<n;i++){
        int x,a;
        cin>>x>>a;
        for(int p=x;p<x+a&&p<W;p++){
            windows[p]++;
            //cout<<"Filter pos: "<<p<<"\tNow Value: "<<windows[p]<<endl;
        }
    }
    for(int i=0;i<W;i++){
        //cout<<"Now Check : "<<i<<"\tValue : "<<windows[i]<<endl;
        if(windows[i]==1) f_50++;
        else if(windows[i]==0) f_100++;
    }
    cout<<f_100*H<<" "<<f_50*H<<endl;
}
