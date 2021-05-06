#include<bits/stdc++.h>
using namespace std;

int times_rotated(int arr[],int n){

    int start = 0;
    int end = n-1;
    int ans  = -1;
    while(start<=end){
        if(arr[start]<= arr[end]){
            return start;
        }
        int mid  = (start+end)/2;
        int next = (mid+1)%n;
        int prev = ((mid+n) -1)%n;

        if(arr[mid]<=arr[prev] && arr[mid]<= arr[next]) {
            ans =  mid;
        }
        else if(arr[mid]>=arr[start]){
            start  = mid+1;
        }
        else{
            end  = mid-1;
        }    
    }
    return ans;
}

int main(){
    int arr[] = {11,12,15,18,2,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = times_rotated(arr,n);
    cout<<res<<endl;

    return 0;
}