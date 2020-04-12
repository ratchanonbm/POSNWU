/*
TASK: snack
LANG: C++
AUTHOR: Ratchanon Panmas
CENTER: WU
*/
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int BFS(vector<int> adj[],int V,int source,int des){
    int c_BFS = 1;
    bool visited[V];
    memset(visited,0,sizeof(visited));
    queue<int> q;

    visited[source] = true;
    q.push(source);
    while(!q.empty()){
        int s = q.front();
        q.pop();
        //cout<<s<<" ";
        if(s == des) break;
        c_BFS++;
        for(int i = 0;i < adj[s].size();i++){
            int node = adj[s][i];
            if (visited[node] == false){
                visited[node] = true;
                q.push(node);
            }
        }
    }
    return c_BFS;
}
int c_DFS = 0;

void DFS_util(int V,bool visited[],vector<int> adj[],int des){
    //cout<<V<<" ";
    if(visited[des] == false) c_DFS++;
    visited[V] = true;
    if(visited[des] == false){
        for(int i = 0;i < adj[V].size();i++){
            int node = adj[V][i];
            if (visited[node] == false){
                DFS_util(node,visited,adj,des);
            }
            if(visited[des] == true) break;
        }
    }
}


void DFS(vector<int> adj[],int V,int source,int des){
    bool visited[V];
    memset(visited,0,sizeof(visited));
    DFS_util(source,visited,adj,des);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Driver Code
    int V;  //Node
    int E;  //Edge
    int S;  //Source
    int D;  //Destination

    cin>>V>>E>>S>>D;

    //TO Store Graph
    vector<int> adj[V];

    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        addEdge(adj, u, v);
    }

    int c_BFS = BFS(adj,V,S,D);
    DFS(adj,V,S,D);

    if(c_BFS > c_DFS) cout<<"DEPTH"<<endl;
    else if(c_BFS < c_DFS) cout<<"BREADTH"<<endl;
    else if(c_BFS == c_DFS) cout<<"EQUAL"<<endl;


    return 0;
}
