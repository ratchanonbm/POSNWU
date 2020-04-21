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

    for(int i=0;i<N;i++) {
        cin>>soap[i];
    }

    sort(soap,soap+N);

    int Q;
    cin>>Q;
    for(int q=0;q<Q;q++){
        int input;
        cin>>input;
        cout<<lower_bound(soap, soap+N, input) - soap<<endl;
    }


    return 0;
}
