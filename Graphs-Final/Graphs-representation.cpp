#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;

    public:
    Graph(int V){
        this->V = V;
        adj = new list<int> [V]; 
    }

    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printadjList(){
        for(int i=0;i<V;i++){
            cout<<"Vertex: "<<i<<"->";
            for(auto nbr:adj[i]){
                cout<<nbr<<" ";
            }cout<<endl;
        }
    }
};


int main(){
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,2);
    g.addEdge(2,3);

    g.printadjList();

    return 0;
}