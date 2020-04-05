/*
    Task: PR_STL_PioQueue
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int T;
    cin>>T;

    for(int t=0;t<T;t++){
        int Q;
        cin>>Q;

        priority_queue<int> pq;

        for(int q=0;q<Q;q++){
            int com;
            cin>>com;

            if(com == 1){
                int X;
                cin>>X;

                pq.push(X);

                priority_queue<int> g = pq;
                while(!g.empty()){
                    cout<<g.top()<<" ";
                    g.pop();
                }
                cout<<endl;
            }
            if(com == 2){
                cout<<pq.top()<<endl;
                pq.pop();
            }
            if(com == 3){
                cout<<pq.top()<<endl;
            }
            if(com == 4){
                cout<<pq.size()<<endl;
            }
            if(com == 5){
                priority_queue<int> g = pq;
                while(!g.empty()){
                    cout<<g.top()<<" ";
                    g.pop();
                }
                cout<<endl;
            }
        }
    }


    return 0;
}
