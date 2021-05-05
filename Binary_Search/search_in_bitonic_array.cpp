#include<bits/stdc++.h>
using namespace std;

int binary_Search(vector<int>&arr,int start,int end,int n,int key){
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]== key) return mid;
        else if(arr[mid]> key){
            end = mid-1;
        }
        else{
            start  = mid+1;
        }
    }
    return -1;
}

int findpeak(vector<int> &arr,int n){
    int start =0;
    int end = n-1;
    while(start<=end){
        int mid = (start+(end-start)/2);
        if((mid ==0||arr[mid]>arr[mid-1])&& (mid == n-1||arr[mid]>arr[mid+1])) return mid;

        else if(mid>0&& arr[mid-1]>arr[mid]) end  = mid-1;
        else{
            start = mid+1;
        }
    }
    return -1;
}
int searchInBTarr(vector<int> &arr,int key){
    int n = arr.size();
    int idx = findpeak(arr,n);
    int ar1 = binary_Search(arr,0,idx-1,n,key);
    int ar2 = binary_Search(arr,idx,n-1,n,key);
    if(ar1==-1){
        return ar2;
    }
    else{
        return ar1;
    }

    return -1;
}

int main(){
    vector<int> arr = {1,3,11,20,4,2};
    int key = 4;

    int SS = searchInBTarr(arr,key);
    cout<<SS<<endl;

    return 0;
}