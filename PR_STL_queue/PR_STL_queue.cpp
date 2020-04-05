/*
    Task: PR_STL_queue
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    //Start Code
    int T;
    cin>>T;

    for(int t=0;t<T;t++){
        queue<int> que;
        int Q;
        cin>>Q;

        for(int q=0;q<Q;q++){
            char com;
            cin>>com;
            if(com == 'a'){
                int x;
                cin>>x;
                que.push(x);
            }
            if(com == 'b'){
                if(que.empty()) cout<<"-1 ";
                else {
                    cout<<que.front()<<" ";
                    que.pop();
                }
            }
            if(com == 'c'){
                cout<<que.size()<<" ";
            }
            if(com == 'd'){
                if(que.empty()) cout<<"-1 ";
                else {
                    cout<<que.front()<<" ";
                }
            }
            if(com == 'e'){
                if(que.empty()) cout<<"-1 ";
                else {
                    cout<<que.back()<<" ";
                }
            }
        }
        cout<<endl;
    }


    return 0;
}
