#include<iostream>
using namespace std;

void Selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}


void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int flag = 0;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag==0) break;
    }
}

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current  = arr[i];
        int j = i-1;
        while(arr[j]>current && arr[j]>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // bubblesort(arr,n);
    InsertionSort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}