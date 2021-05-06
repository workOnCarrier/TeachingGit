#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[],int n ,int key ){
    int start  = 0;
    int end  = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid ]== key) return mid;
        else if(arr[mid]> key){
            end = mid-1;
        }
        else{
            start  = mid+1;
        }
    }
    return -1;
}


int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key  = 9;

    int res = Binary_Search(arr,n,key);
    cout<<res<<endl;
    return 0;
}