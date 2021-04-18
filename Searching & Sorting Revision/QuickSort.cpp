#include<iostream>
using namespace std;

int partition(int arr[],int l, int r){
    int pi = arr[r];
    int i = l-1;
    for(int j=l;j<r;j++){
        if(arr[j]< pi){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}


void Quicksort(int arr[],int l,int r){
    if(l<r){
        int pi = partition(arr,l,r);
        Quicksort(arr,l,pi-1);
        Quicksort(arr,pi+1,r);
    }
}

int  main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;

}