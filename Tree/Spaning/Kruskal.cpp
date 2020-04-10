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

int myComp(const void* a,const void* b){
    Edge* a1 = (Edge*) a;
    Edge* b1 = (Edge*) b;
    return a1->weight > b1->weight;
}

void KruskalMST(Graph* graph){
    int V = graph->V;
    Edge result[V];

    int e = 0;
    int i = 0;

    qsort(graph->edge,graph->E,sizeof(graph->edge[0]), myComp);

    int *parent = new int[V * sizeof(int)];

    memset(parent,-1,sizeof(int)*V);

    while(e < V-1 && i < graph->E){
        Edge next_edge = graph->edge[i++];

        int subset_src = find(parent, next_edge.src);
        int subset_dest = find(parent, next_edge.dest);

        if(subset_src != subset_dest){
            result[e++] = next_edge;
            Union(parent,subset_src, subset_dest);
        }
    }

    cout<<"Following are the edges in the constructed MST\n:";
    for(int i=0;i<e;++i){
        cout<<result[i].src<<" -- "<<result[i].dest<<" == "<<result[i].weight<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Driver Code

    return 0;
}
