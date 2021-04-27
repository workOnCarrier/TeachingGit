#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;

vector<int> kFrequent(int arr[],int n,int k){
    vector<int> res;
    unordered_map<int,int> mp;
    priority_queue<pi,vector<pi>,greater<pi>> minheap;
    for(int  i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto i = mp.begin();i!=mp.end();i++){
        minheap.push({i->second,i->first});
        if(minheap.size()>k){
            minheap.pop();
        }
    }
    while(minheap.size()>0){
        res.push_back(minheap.top().second);
        minheap.pop();
    }  
    return res;
}

int main(){
    int arr[] = {1,1,1,3,2,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    vector<int> res = kFrequent(arr, n, k);
    for(auto i: res){
        cout<<i<<" ";
    }cout<<endl;
    
}