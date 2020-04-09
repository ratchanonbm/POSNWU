/*
    Task: 04-DFS
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
}

void DFS_util(int V,bool visited[],vector<int> adj[],int *mat,int N){
    //cout<<V<<" ";
    visited[V] = true;
    for(int i = 0;i < adj[V].size();i++){
        int node = adj[V][i];
        *((mat+V*N)+node) = 1;
        if (visited[node] == false){
            DFS_util(node,visited,adj,(int *)mat,N);
        }
    }
}

void DFS(int V,int source,vector<int> adj[],int *mat,int N){
    bool visited[V];
    memset(visited,0,sizeof(visited));
    DFS_util(source,visited,adj,(int *)mat,N);
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int N;
    cin>>N;
    vector<int> adj[N];

    int E;
    cin>>E;

    for(int i=0;i<E;i++){
        int node1,node2;
        cin>>node1>>node2;
        addEdge(adj,node1,node2);
    }

    int mat[N][N];
    memset(mat,0,sizeof(mat));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i == j) mat[i][j] = 1;
        }
    }

    int source = 0;
    //cin>>source;
    DFS(N,source,adj,(int *)mat,N);

    cout<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
