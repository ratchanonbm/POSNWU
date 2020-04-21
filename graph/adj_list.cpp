/*
    Task: Graph Adj_list
    Author: Ratchanon Panmas
    Lang: C++
*/
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<string,int>> adj[],int u,string v,int w){
    adj[u].push_back(make_pair(v,w));
}

void printData(vector<pair<string,int>> adj[],vector<string> city,int N){

    for(int i=0;i<N;i++){
        cout<<city[i];
        if(!adj[i].empty()){
            for(auto j = adj[i].begin();j != adj[i].end();j++){
                cout<<"\t-> "<<j->first <<" "<< j->second<<" hours"<<endl;
            }
        }
        else {
            cout<<"\t-> -"<<endl;
        }
        cout<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Start Code
    int N = 5;
    //cin>>N;
    vector<int> adj[N];

    city.push_back("Bangkok");
    city.push_back("Chiang Mai");
    city.push_back("Chiang Rai");
    city.push_back("Phuket");
    city.push_back("Nakhon Si Thammarat");


    addEdge(adj, 0, "Chiang Mai", 12);
    addEdge(adj, 0, "Nakhon Si Thammarat", 4);
    addEdge(adj, 1, "Nakhon Si Thammarat", 15);
    addEdge(adj, 1, "Phuket", 19);
    addEdge(adj, 2, "Chiang Mai", 2);
    addEdge(adj, 2, "Phuket", 18);
    addEdge(adj, 3, "Nakhon Si Thammarat", 4);


    printData(adj,city,N);

    return 0;
}
