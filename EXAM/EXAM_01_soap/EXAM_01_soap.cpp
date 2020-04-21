/*
TASK: soap
LANG: C++
AUTHOR: Ratchanon Panmas
CENTER: WU
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Driver Code
    int N;
    cin>>N;

    int soap[N];

    for(int i=0;i<N;i++) cin>>soap[i];

    sort(soap,soap+N);

    //for(int i=0;i<N;i++) cout<<soap[i];

    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++){
        int q;
        int c = 0;
        cin>>q;
        for(int j=0;j<N;j++){
            if(soap[j]<q) c++;
             else break;
        }
        cout<<c<<endl;
    }


    return 0;
}
