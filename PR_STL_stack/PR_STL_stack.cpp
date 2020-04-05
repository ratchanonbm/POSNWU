/*
    Task: PR_STL_stack
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
        stack<int> s;

        int Q;
        cin>>Q;

        for(int q=0;q<Q;q++){
            char com;
            cin>>com;
            if(com == 'a'){
                int v;
                cin>>v;
                s.push(v);
            }
            if(com == 'b'){
                cout<<s.top()<<" ";
                s.pop();
            }
            if(com == 'c'){
                cout<<s.size()<<" ";
            }
            if(com == 'd'){
                if(s.empty()){
                    cout<<"-1 ";
                } else {
                    cout<<s.top();
                }
            }
        }
        cout<<endl;
    }


    return 0;
}
