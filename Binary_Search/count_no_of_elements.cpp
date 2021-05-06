#include<bits/stdc++.h>
using namespace std;

int first_occurence(int arr[],int n,int key){
    int start  = 0;
    int end = n-1;
    int res = -1;
    while(start<= end){
        int mid  = (start+end)/2;
        if(arr[mid]== key){
            res  = mid;
            end  = mid-1;
        }
        else if(arr[mid]>key) {
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}
int last_occurence(int arr[],int n,int key){
    int start  = 0;
    int end = n-1;
    int res = -1;
    while(start<= end){
        int mid  = (start+end)/2;
        if(arr[mid]== key){
            res  = mid;
            start  = mid+1;
        }
        else if(arr[mid]>key) {
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
}
int Count_Occurences(int arr[],int n,int key){
    int first = first_occurence(arr,n,key);
    int last = last_occurence(arr,n,key);

    return (last-first) +1;
}

int main(){
    int arr[] = {2,4,6,6,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 6;
    int count  = Count_Occurences(arr,n,key);
    cout<<count<<endl;

    return 0;
}