/*
    Task: PrimMST Algo
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[],int u,int v,int w){
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}

int minKey(int key[],bool mstSet[],int V){
    int mn = INT_MAX;
    int min_index;

    for(int v=0;v<V;v++){
        if(!mstSet[v]&&key[v]<mn){
            mn = key[v];
            min_index = v;
        }
    }
    return min_index;
}

void printfMST(int parent[], vector<pair<int,int>> adj[],int V){
    cout<<"Edge\t weight\n";
    for(int i=1;i<V;i++){
        cout<<parent[i]<<"->"<<i<<endl;
    }
}

void PrimMST(vector<pair<int,int>> adj[], int V){
    int parent[V];  //To Store Parent
    int key[V];     //To Store key value
    bool mstSet[V]; //To Store MST

    //Initialize
    for(int i=0;i<V;i++){
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    //Initialize first node
    key[0] = 0;
    parent[0] = 0;

    for(int c=0;c<V-1;c++){
        //Pick the minimum key
        int u=minKey(key, mstSet,V);

        //Add node u to masSet
        mstSet[u] = true;

        //Update key value
        for(auto it=adj[u].begin();it!=adj[u].end();it++){
            int v = it -> first;
            int w = it -> second;
            if(!mstSet[v]&&w < key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    printfMST(parent, adj, V);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int V  = 9;
    //cin>>V;
    vector<pair<int,int>> adj[V];
    addEdge(adj, 0, 1, 4);
    addEdge(adj, 0, 7, 8);
    addEdge(adj, 1, 2, 8);
    addEdge(adj, 1, 7, 11);
    addEdge(adj, 2, 3, 7);
    addEdge(adj, 2, 8, 2);
    addEdge(adj, 2, 5, 4);
    addEdge(adj, 3, 4, 9);
    addEdge(adj, 3, 5, 14);
    addEdge(adj, 4, 5, 10);
    addEdge(adj, 5, 6, 2);
    addEdge(adj, 6, 7, 1);
    addEdge(adj, 6, 8, 6);
    addEdge(adj, 7, 8, 7);

    PrimMST(adj,V);

    return 0;
}
