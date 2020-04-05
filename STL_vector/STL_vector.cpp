/*
    Task: STL_vector
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
        vector<int> v;
        int Q;
        cin>>Q;

        for(int q=0;q<Q;q++){
            char com;
            cin>>com;
            if(com == 'a'){
                int n;
                cin>>n;
                v.push_back(n);
            }
            if(com == 'b'){
                sort(v.begin(),v.end());
            }
            if(com == 'c'){
                reverse(v.begin(),v.end());
            }
            if(com == 'd'){
                cout<<v.size()<<" ";
            }
            if(com == 'e'){
                for(auto i = v.begin();i != v.end();i++){
                    cout<<*i<<" ";
                }
            }
            if(com == 'f'){
                sort(v.begin(),v.end(),greater<int>());
            }
        }
        cout<<endl;
    }


    return 0;
}
