#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int iMin = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[iMin]){
                iMin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[iMin];
        arr[iMin] = temp;
    }
}

int main(){
    int n;
    cout<<"Enter Number Elements in Array: ";
    cin>>n;
    int arr[n];
    cout<<"Now Enter all elements of an Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The Sorted arrangement of above array is: ";
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}