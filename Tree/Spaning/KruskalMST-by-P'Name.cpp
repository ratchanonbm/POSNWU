#include<bits/stdc++.h>
using namespace std;

// a structure to represent edge in graph
class Edge
{
    public:
    int src; // source
    int dest; // destination
    int weight; // weight
};

// a structure to represent
class Graph
{
    public:
    int V; // number of nodes
    int E; // number of edges

    Edge* edge;  // pointer to edge
};

// Create a graph with V vertices and E edges
Graph* createGraph(int V, int E)
{
    Graph* graph = new Graph();
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[graph->E * sizeof(Edge)];

    return graph;
}

int find(int parent[], int i)
{
    if (parent[i] == -1 || parent[i] == i)
        return i;
    return find(parent, parent[i]);
}

void Union(int parent[], int x, int y)
{
    int set_x = find(parent, x); // find subset of x
    int set_y = find(parent, y); // find subset of y

    if (set_x != set_y)
    {
        parent[set_y] = set_x;
    }
}

int myComp(const void* a, const void* b)
{
    Edge* a1 = (Edge*)a;
    Edge* b1 = (Edge*)b;
    int wa = a1->weight;
    int wb = b1->weight;
    if (wa > wb)
        return 1;
    else if (wa == wb)
        return 0;
    else
        return -1;
//    return a1->weight > b1->weight;

}

void KruskalMST(Graph* graph)
{
    int V = graph->V; // number of nodes
    Edge result[V]; // to store result of edge in MST
    int e = 0; // An index variable, used for result[]
    int i = 0; // An index variable, used for sorted edges

    //sort the edge
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);

//    for(int j=0; j<graph->E; j++)
//    {
//        cout << "\n" << graph->edge[j].src << "--" << graph->edge[j].dest << " weight: " << graph->edge[j].weight;
//    }

    // Allocate memory for parent
    int *parent = new int[V * sizeof(int)];

    //initialize all parent to -1
    memset(parent, -1, sizeof(int)*V);

    while (e < V-1 && i < graph->E)
    {
        // pick the smallest
        Edge next_edge = graph->edge[i++];

        int subset_src = find(parent, next_edge.src);
        int subset_dest= find(parent, next_edge.dest);

        //check cycle
        if (subset_src != subset_dest)
        {
            result[e++] = next_edge;
            Union(parent, subset_src, subset_dest);
        }
        // else discard the next_edge
    }
    cout << "\nFollowing are the edges in the constructed MST:\n";
    for (i = 0; i < e; ++i)
        cout << result[i].src << " -- " << result[i].dest << " weight: " << result[i].weight << endl;
    return;
}

int main()
{
    /*Let us create graph
          8    7
        1---2-------3
       /|   |\      |\
      /4|   |2\     | \9
     /  |   |  \    |  \
    0   |11 8   \4  |14 4
     \  |  /|    \  |  /
      \8| /7|6    \ | /10
       \|/  |      \|/
        7---6-------5
          1      2
    */
    int V = 9;
    int E = 14;

    Graph* graph = createGraph(V, E);

    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = 4;
    // add edge 0-7
    graph->edge[1].src = 0;
    graph->edge[1].dest = 7;
    graph->edge[1].weight = 8;
    // add edge 1-2
    graph->edge[2].src = 1;
    graph->edge[2].dest = 2;
    graph->edge[2].weight = 8;
    // add edge 1-7
    graph->edge[3].src = 1;
    graph->edge[3].dest = 7;
    graph->edge[3].weight = 11;
    // add edge 2-3
    graph->edge[4].src = 2;
    graph->edge[4].dest = 3;
    graph->edge[4].weight = 7;
    // add edge 2-5
    graph->edge[5].src = 2;
    graph->edge[5].dest = 5;
    graph->edge[5].weight = 4;
    // add edge 2-8
    graph->edge[6].src = 2;
    graph->edge[6].dest = 8;
    graph->edge[6].weight = 2;
    // add edge 3-4
    graph->edge[7].src = 3;
    graph->edge[7].dest = 4;
    graph->edge[7].weight = 9;
    // add edge 3-5
    graph->edge[8].src = 3;
    graph->edge[8].dest = 5;
    graph->edge[8].weight = 14;
    // add edge 4-5
    graph->edge[9].src = 4;
    graph->edge[9].dest = 5;
    graph->edge[9].weight = 10;
    // add edge 5-6
    graph->edge[10].src = 5;
    graph->edge[10].dest = 6;
    graph->edge[10].weight = 2;
    // add edge 6-7
    graph->edge[11].src = 6;
    graph->edge[11].dest = 7;
    graph->edge[11].weight = 1;
    // add edge 6-8
    graph->edge[12].src = 6;
    graph->edge[12].dest = 8;
    graph->edge[12].weight = 6;
    // add edge 7-8
    graph->edge[13].src = 7;
    graph->edge[13].dest = 8;
    graph->edge[13].weight = 7;

    KruskalMST(graph);
    return 0;
}

