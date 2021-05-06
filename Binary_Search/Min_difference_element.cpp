#include<bits/stdc++.h>
using namespace std;

int min_diff(int arr[],int n,int key){
    int start =0;
    int end = n-1;
    int res = INT_MAX;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            int ans = arr[mid]-key;
            return ans;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    res = min(min(abs(arr[start]-key),abs(arr[end]-key)),res);
    return res;
}


int main(){
    int arr[] = {1,3,8,10,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 12;
    int ans = min_diff(arr,n,key);
    cout<<ans<<endl; 


    return 0;
}