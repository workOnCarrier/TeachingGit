#include<bits/stdc++.h>
using namespace std;


int findpeak(int arr[],int n){
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

int main(){
    int arr[] =  {1,3,11,20,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res  = findpeak(arr,n);
    cout<<res<<endl;
    
    return 0;
}