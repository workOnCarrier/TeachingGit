#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]<key){
            s= mid+1;
        }
        if(arr[mid]>key){
            e = mid-1;
        }
        if(arr[mid]==key){
            return mid;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    binarySearch(arr,n,key);
    cout<<binarySearch(arr,n,key);
    cout<<endl;


    return 0;
}
