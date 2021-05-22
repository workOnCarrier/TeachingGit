#include<bits/stdc++.h>
using namespace std;

bool iscycle(int src,vector<vector<int>> &adj, vector<bool> &vis, int parent){
    vis[src] = true;
    for(auto i : adj[src]){
        if(i!= parent){
            if(vis[i]){
                return true;
            }
            if(!vis[i] and iscycle(i,adj,vis,src)){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int n,m; cin>>n>>m;
    vector<vector<int>>adj(n);

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bool cycle = false;
    vector<bool> vis(n,false); // It means initially all of the elements are false

    for(int i=0;i<n;i++){
        if(!vis[i] and iscycle(i,adj,vis,-1)){
            cycle  = true;  
        }
    }
    if(cycle){
        cout<<"Cycle is Present"<<endl;
    }
    else {
        cout<<"Cycle is not present"<<endl;
    }
    

    return 0;
}