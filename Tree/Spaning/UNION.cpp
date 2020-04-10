/*
    Task:
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

class Edge{
    public:
        int src;    //Source
        int dest;    //Destination
        int weight; //Weight from source to destination
};

class Graph{
    public:
        int V;  //Node (Vertex);
        int E;  //Edge
        Edge *edge; //Pointer point to edge
};

Graph* createGraph(int V,int E){
    Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[graph->E *sizeof(Edge)];

    return graph;

}

int find(int parent[],int i){
    if(parent[i] == i||parent[i] == -1)
        return i;
    else return find(parent,parent[i]);
}

void Union(int parent[],int x,int y){
    int set_x = find(parent,x); //Subset X
    int set_y = find(parent,y); //Sebset Y

    if(set_x != set_y)  //If not equal
        parent[set_y] = set_x;  //Subset y = Subset x

}

bool isCycle(Graph* graph){
    int *parent = new int[graph->V *sizeof(int)];

    memset(parent, -1,sizeof(int) * graph->V);

    for(int i=0;i<graph->E;i++){
        int subset_src = find(parent, graph->edge[i].src);
        int subset_dest = find(parent, graph->edge[i].dest);

        if(subset_src == subset_dest)
            return true;
        Union(parent, subset_src, subset_dest);
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Driver Code
//    int V = 8;
//    int parent[V];
//    memset(parent,-1,sizeof(parent));
//    parent[0] = 0;
//    parent[1] = 0;
//    parent[2] = 1;
//    parent[3] = 3;
//    parent[4] = -1;
//    parent[5] = 6;
//    parent[6] = 6;
//    parent[7] = 2;
//
//    for(int i=0;i<V;i++){
//        int result = find(parent,i);
//        cout<<result<<" ";
//    }   cout<<endl;
//
//    Union(parent,1,4);
//
//    for(int i=0;i<V;i++){
//        int result = find(parent,i);
//        cout<<result<<" ";
//    }   cout<<endl;

    int V = 3, E = 3;
    Graph *graph = createGraph(V,E);

    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;

    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;

    graph->edge[2].src = 0;
    graph->edge[2].dest = 2;

    if(isCycle(graph))
        cout<<"Graph contain cycle"<<endl;
    else
        cout<<"Graph don't have loop cycle"<<endl;
    return 0;
}
