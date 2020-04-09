/*
    Task: 03-BFS
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[],int V,int source){
    bool visited[V];
    memset(visited,0,sizeof(visited));
    queue<int> q;

    visited[source] = true;
    q.push(source);
    while(!q.empty()){
        int s = q.front();
        q.pop();
        cout<<s<<" ";
        for(int i = 0;i < adj[s].size();i++){
            int node = adj[s][i];
            if (visited[node] == false){
                visited[node] = true;
                q.push(node);
            }
        }
    }

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
    BFS(adj,V,source);

    return 0;
}
