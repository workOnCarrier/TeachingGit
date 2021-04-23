#include<bits/stdc++.h>
using namespace std;
int Ksmallest(int arr[],int n,int k){
    priority_queue<int> max;
    for(int i=0;i<n;i++){
        max.push(arr[i]);
        if(max.size()>k){
            max.pop();
        }
    }
    return max.top();

}

int main(){
    int arr[] = {1,3,5,11,12,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    int first = Ksmallest(arr,n,3);
    cout<<first<<endl;
    int second = Ksmallest(arr,n,6);
    cout<<second<<endl;
    int res = 0;
    for(int i =0;i<n;i++){
        if(arr[i]>first and arr[i]<second){
            res+=arr[i];
        }
    }
    cout<<res<<endl;

    return 0;
}