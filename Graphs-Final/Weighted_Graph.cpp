#include<bits/stdc++.h>
using namespace std;

class Graph{
    unordered_map<string,list<pair<string,int>>> adj;
    public:
    void addEdge(string x,string y,bool bidir,int weight){
        adj[x].push_back(make_pair(y,weight));
        if(bidir){
            adj[y].push_back(make_pair(x,weight));
        }
    }

    void printAdjList(){
        for(auto i: adj){
            string city  =i.first;
            list<pair<string,int>> nbrs = i.second;
            cout<<"City"<<city<<": Neighbours and Distances ->";
            for(auto nbr:nbrs){
                int dist  = nbr.second;
                string dest  = nbr.first;
                cout<<dest<<" "<<dist<<",";
            }cout<<endl;
        }
    }
};

int main(){
    Graph g;
    g.addEdge("A","B",true,20);
    g.addEdge("A","C",true,50);
    g.addEdge("B","C",true,30);
    g.addEdge("C","D",true,40);
    g.addEdge("D","A",false,90);

    g.printAdjList();



    return 0;
}