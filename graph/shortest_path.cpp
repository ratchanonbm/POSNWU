/*
    Task: 04-DFS
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[],int u,int v,int w){
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(v,w));
}

void shortest_path(vector<pair<int,int>> adj[],int src,int des,int V){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;  //(dist ,node)

    int parent[V] = {0};
    parent[src] = -1;

    vector<int> dist(V, INT_MAX);
    vector<bool> visited(V, false);

    q.push(make_pair(0,src));
    dist[src] = 0;

    pair<int ,int> v;
    int s, w, node, weight;

    while(!q.empty()){
        v = q.top();
        q.pop();

        w = v.first;
        s = v.second;

        visited[s] = true;
        for(auto it = adj[s].begin();it != adj[s].end();it++){
            node = it -> first;
            weight = it -> second;
            if(dist[s] + weight < dist[node]){
                dist[node] = dist[s] + weight;
                q.push(make_pair(dist[node],node));
                parent[node] = s;
            }
        }
    }
    //for(int i=src;i<V;i++) cout<<dist[i]<<" ";
    int temp_des = des;

    stack<int> path;

    path.push(temp_des);

    while(temp_des != src){
        temp_des = parent[temp_des];
        path.push(temp_des);
    }

    while(!path.empty()){
        cout<<path.top()<<" ";
        path.pop();
    }

    cout<<endl;
    cout<<dist[des]<<endl;
}




int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Start Code
    int N;
    cin>>N;
    N++;

    vector<pair<int,int>> adj[N];

    int E;
    cin>>E;

    int start;
    int stop;

    cin>>start;
    cin>>stop;

    for(int i=0;i<E;i++){
        int u,v,w;
        cin>>u>>v>>w;
        addEdge(adj, u, v, w);
    }

    shortest_path(adj,start,stop,N);


    return 0;
}
