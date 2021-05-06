#include<bits/stdc++.h>
using namespace std;

int Minimal_Cost(int arr[],int n){
    int sum=0;
    priority_queue<int,vector<int>,greater<int>> minheap;
    for(int i =0;i<n;i++){
        minheap.push(arr[i]);
    }
    
    while(minheap.size()>1){
        int n1 = minheap.top();
        minheap.pop();
        int n2 =  minheap.top();
        minheap.pop();
        sum = sum + n1 + n2;
        minheap.push(n1+n2);
    }
    return sum;
    
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = Minimal_Cost(arr,n);
    cout<<res<<endl;

    return 0;
}