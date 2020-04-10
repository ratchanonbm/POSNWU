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
    if(parent[i] == i||parent[i] == -1)     //Find parent and store in array
        return i;
    else return find(parent,parent[i]);     //Recursive
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
    return a1->weight > b1->weight; //Source edge by use weight
}

void KruskalMST(Graph* graph){
    int V = graph->V;
    Edge result[V];

    int e = 0;  //iterator of result
    int i = 0;  //iterator of edge

    qsort(graph->edge,graph->E,sizeof(graph->edge[0]), myComp);     //Sort Graph by use Weight between node

    int *parent = new int[V * sizeof(int)]; //Allocate Memory size = 4bit * V

    memset(parent,-1,sizeof(int)*V);    //Set parent to -1

    while(e < V-1 && i < graph->E){
        Edge next_edge = graph->edge[i++];                   //new_edge = edge
                                                                //i++ increase iterator

        int subset_src = find(parent, next_edge.src);       //Find subset of Source(start)
        int subset_dest = find(parent, next_edge.dest);     //Find subset of destination

        if(subset_src != subset_dest){                      //If not same subset
            result[e++] = next_edge;                        //Result[e] = next_edge
            Union(parent,subset_src, subset_dest);          //Make it same subset
        }
    }

    cout<<"Following are the edges in the constructed MST:\n";
    for(int i=0;i<e;++i){
        cout<<result[i].src<<" -- "<<result[i].dest<<" == "<<result[i].weight<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //Driver Code
    //Create Graph
    int V = 9;
    int E = 14;

    Graph *graph = createGraph(V,E);

    //0->1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = 4;

    //0->7
    graph->edge[1].src = 0;
    graph->edge[1].dest = 7;
    graph->edge[1].weight = 8;

    //1->2
    graph->edge[2].src = 1;
    graph->edge[2].dest = 2;
    graph->edge[2].weight = 8;

    //1->7
    graph->edge[3].src = 1;
    graph->edge[3].dest = 7;
    graph->edge[3].weight = 11;

    //2->3
    graph->edge[4].src = 2;
    graph->edge[4].dest = 3;
    graph->edge[4].weight = 7;

    //2->5
    graph->edge[5].src = 2;
    graph->edge[5].dest = 5;
    graph->edge[5].weight = 4;

    //2->8
    graph->edge[6].src = 2;
    graph->edge[6].dest = 8;
    graph->edge[6].weight = 2;

    //3->4
    graph->edge[7].src = 3;
    graph->edge[7].dest = 4;
    graph->edge[7].weight = 9;

    //3->5
    graph->edge[8].src = 3;
    graph->edge[8].dest = 4;
    graph->edge[8].weight = 14;

    //4->5
    graph->edge[9].src = 4;
    graph->edge[9].dest = 5;
    graph->edge[9].weight = 10;

    //5->6
    graph->edge[10].src = 5;
    graph->edge[10].dest = 6;
    graph->edge[10].weight = 2;

    //6->7
    graph->edge[11].src = 6;
    graph->edge[11].dest = 7;
    graph->edge[11].weight = 1;

    //6->8
    graph->edge[12].src = 6;
    graph->edge[12].dest = 8;
    graph->edge[12].weight = 6;

    //7->8
    graph->edge[13].src = 7;
    graph->edge[13].dest = 8;
    graph->edge[13].weight = 6;

    KruskalMST(graph);

    return 0;
}
