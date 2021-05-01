#include<bits/stdc++.h>
using namespace std;

int NSS(vector<int> &arr,int ele){
    int start = 0;
    int end = arr.size();
    while(start<=end){
       int mid = (start+end)/2;
       if(arr[mid]==ele) return mid;
       else if(arr[mid-1]==ele && mid-1>=start) return mid-1;
       else if(arr[mid+1]==ele && mid+1<=end) return mid+1;

       else if(ele>mid) start  = mid+2;
       else if(ele <mid) end  = mid -2;

    }
    return -1;
}


int main(){
    vector<int> arr = {10,3,40,20,50,80,70};
    int pos = NSS(arr,70);
    cout<<pos<<endl;

    return 0;
}