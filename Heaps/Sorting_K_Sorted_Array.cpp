#include<bits/stdc++.h>
using namespace std;

vector <int> Ksorted(int arr[],int n,int k){
    priority_queue<int , vector<int>, greater<int>> minheap;
    vector<int > res;
    for(int i=0;i<n;i++){
        minheap.push(arr[i]);
        if(minheap.size()>k){
            res.push_back(minheap.top());
            minheap.pop();
        }
    }
    while(k>0){
        res.push_back( minheap.top());
        minheap.pop();
        k--;
    }
    return res;
}


int main(){
    int arr[] = {6,5,3,2,8,9,10};
    int n  = sizeof(arr)/sizeof(arr[0]);
    
    int k = 3;
    auto res = Ksorted(arr,n,k);
    for(auto i : res ){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}