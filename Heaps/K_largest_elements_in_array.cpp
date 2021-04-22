#include<bits/stdc++.h>
using namespace std;

vector<int> kLargest(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> minheap;
    vector<int> res;
    for(int i=0;i<n;i++){
        minheap.push(arr[i]);
        if(minheap.size()>k){
            minheap.pop();
        }
    }
    while(k>0){
        res.push_back(minheap.top());
        minheap.pop();
        k--;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    auto ans = kLargest(arr,n,k);
    for(auto x: ans){
        cout<< x << " ";
    }cout<<endl;

    return 0;
}
