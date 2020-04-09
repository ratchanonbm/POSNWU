/*
    Task: 04-DFS
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFS_util(int V,bool visited[],vector<int> adj[]){
    cout<<V<<" ";
    visited[V] = true;
    for(int i = 0;i < adj[V].size();i++){
        int node = adj[V][i];
        if (visited[node] == false){
            DFS_util(node,visited,adj);
        }
    }
}

void DFS(int V,int source,vector<int> adj[]){
    bool visited[V];
    memset(visited,0,sizeof(visited));
    DFS_util(source,visited,adj);
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int V = 11;
    //cin>>N;
    vector<int> adj[V];

    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 5, 9);
    addEdge(adj, 3, 6);
    addEdge(adj, 3, 7);
    addEdge(adj, 6, 10);
    addEdge(adj, 4, 8);

    int source;
    cin>>source;
    DFS(V,source,adj);


    return 0;
}
