// Declaration of maxheap = priority_queue<int> maxheap
// Declaration of minheap = priority_queue< int,vector<int>,greater<int>> minheap

//Kth smallest element
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12,3,4,5,23,54,65};
    int size = sizeof(arr)/sizeof(arr[0]); 
    
    int k;
    cin>>k;
    priority_queue<int> maxheap;
    vector<int> ans;

    for(int i =0;i<size;i++){
        maxheap.push(arr[i]);
        if(maxheap.size()> k){
            maxheap.pop();
        }
    }
    while(k>0){
        ans.push_back(maxheap.top());
        maxheap.pop();
    }
    return ans;

}