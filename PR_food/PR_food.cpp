/*
    Task: PR_food
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int n;
    int m;

    cin>>n;
    cin>>m;

    vector<int> food;
    for(int i=0;i<n;i++) food.push_back(i+1);



    vector<int> fb;
    for(int i=0;i<m;i++) {
        int del;
        cin>>del;
        fb.push_back(del);
    }

    food.shrink_to_fit();


    do {
        bool flag = true;
        for(int j=0;j<fb.size();j++){
            if(food.front()==fb[j]) {
                flag = false;
                break;
            }

        }
        if(flag){
            for(int i=0;i<food.size();i++) cout<<food[i]<<" ";
            cout<<"\n";
        }
    } while (next_permutation(food.begin(), food.end()));


    return 0;
}
