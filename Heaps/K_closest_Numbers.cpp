#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int x = 7; 

    priority_queue<pair<int,int>> maxheap;

    for(int i =0;i<n;i++){
        maxheap.push({abs(arr[i]-x),arr[i]});
        if(maxheap.size()>k){
            maxheap.pop();
        }
    }
    while (maxheap.size()){
        cout<<maxheap.top().second<<" ";
        maxheap.pop();
    }cout<<endl;

    return 0;
}