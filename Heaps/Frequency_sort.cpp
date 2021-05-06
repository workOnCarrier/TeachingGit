#include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int> pi;

vector<int> Frequency_Sort(int arr[], int n){
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    priority_queue<pi> maxheap;
    for(auto i = mp.begin();i!=mp.end();i++){
        maxheap.push({i->second,i->first});
    }
    while(maxheap.size()>0){
        int freq = maxheap.top().first;
        int Number = maxheap.top().second;
        for(int i=0;i<freq;i++){
            ans.push_back(Number);
        }
        maxheap.pop();
    }
    return ans;
}
int main(){
    int arr[]= {1,1,1,3,2,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> res = Frequency_Sort(arr,n);
    for(auto i:res){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}