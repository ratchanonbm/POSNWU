
/*
    Task: 04-DFS
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void bellmanFord(int graph[][3],int V,int E,int src){
    int dist[V];
    for(int i=0;i<V;i++) dist[i] = INT_MAX;

    for(int i=0;i<V-1;i++){
        for(int j=0;j<E;j++){
            int u = graph[j][0];
            int v = graph[j][1];
            int w = graph[j][2];
            if(dist[v] > dist[u] + w)
                dist[v] = dist[u] + w;
        }
    }

    bool isNegative = false;
    for(int j=0;j<E;j++){
        int u = graph[j][0];
        int v = graph[j][1];
        int w = graph[j][2];
        if(dist[v] > dist[u] + w){
            dist[v] = dist[u] + w;
            isNegative = true;
            break;
        }
    }

    if(!isNegative){
        for(int i=0;i<E;i++){
            cout<<"Node "<<i<<"\tDist: "<<dist[i]<<endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int V = 8;
    //cin>>V;

    int E = 5;
    //cin>>E;

    int src = 0;
    //cin>>src;

    int graph[E][3] = {
                        {0,1,-1},
                        {0,2,4},
                        {1,2,3},
                        {1,2,2},
                        {1,4,2},
                        {4,1,1},
                        {4,2,5},
                        {4,3,-4}
                      };
    bellmanFord(graph,V,E,src);

    return 0;
}
