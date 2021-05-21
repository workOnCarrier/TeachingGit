// This algo is known as Kahn's Algo
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<int>adj[n];
    vector<int> indeg(n,0);

    int x,y;
    for(int i= 0;i<m;i++){
        cin>>x>>y;

        adj[x].push_back(y);
        indeg[y]++;

    }

    queue<int> q;
    for(int i=0;i<n;i++){
        if(indeg[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int n  = q.front();
        q.pop();
        
        cout <<n<<" ";
        
        for(auto it : adj[n]){
            indeg[it]--;
            if(indeg[it]==0){
                q.push(it);
            }
        }
    }

    

    return 0;
}