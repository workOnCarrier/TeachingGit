#include<bits/stdc++.h>
using namespace std;

int first1(int arr[],int n){
    int ele  =  1;
    int start  = 0;
    int end = n-1;
    int res = 0;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==ele){
            res = mid;
            end  = mid-1;
        }
        else if(arr[mid]>ele){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}

int main(){ 
    int arr[] = {0,0,0,0,0,0,1,1,1,1,1,};
    int n = sizeof(arr)/sizeof(arr[0]);

    int idx = first1(arr,n);
    cout<<idx<<endl;
    return 0;
}