/*
TASK: supervalentine
LANG: C++
AUTHOR: Ratchanon Panmas
CENTER: WU
*/
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[],int s,int d,int l){
    adj[s].push_back(make_pair(d,l));
    adj[d].push_back(make_pair(s,l));
}

int maxKey(int key[],bool mstSet[],int M){
    int mx = INT_MIN;
    int max_index;

    for(int m=0;m<M;m++){
        if(!mstSet[m]&&key[m]>mx){
            mx = key[m];
            max_index = m;
        }
    }
    return max_index;
}

void printfMST(int parent[], vector<pair<int,int>> adj[],int V){
    cout<<"Edge\t weight\n";
    for(int i=1;i<V;i++){
        cout<<parent[i]<<"->"<<i<<endl;
    }
}

void primMST(vector<pair<int,int>> adj[],int M){
    int parent[M];
    int key[M];
    bool mstSet[M];
    int sum_d = 0;

    for(int i=0;i<M;i++){
        key[i] = INT_MIN;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = 0;

    for(int i=0;i<M-1;i++){
        int s = maxKey(key ,mstSet, M);

        mstSet[s] = true;

        for(auto it=adj[s].begin();it!=adj[s].end();it++){
            int d = it->first;
            int l = it->second;
            if(!mstSet[d]&&l > key[d]){
                parent[d] = s;
                key[d] = l;
            }
        }
    }

    //Sum Distance
    for(int i=1;i<M;i++) {
//        cout<<key[i]<<endl;
        sum_d += key[i] - 1;
    }
    cout<<sum_d<<endl;
    printfMST(parent, adj, M);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Driver Code
    int M;  //Node
    int N;  //Edge

    cin>>M>>N;
    vector<pair<int,int>> adj[M];

    for(int i=0;i<N;i++){
        int s,d,l;
        cin>>s>>d>>l;
        s--;
        d--;
        addEdge(adj,s,d,l);
    }

    primMST(adj, M);

    return 0;
}
