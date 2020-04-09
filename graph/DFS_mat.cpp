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
    for(int i = 0;i < N;i++){
        for(int j = 0;j < adj[i].size();j++){
            int node = adj[i][j];
            *((mat+i*N)+node) = 1;
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
