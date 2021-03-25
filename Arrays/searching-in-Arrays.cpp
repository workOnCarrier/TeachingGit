#include<bits/stdc++.h>
using namespace std;

// int linearsearch(int arr[],int n, int key){
//     for(int i=0; i<n;i++){
//         if(arr[i]==key){
//             return ;
//         }
//     }
//     return -1;
// }

int binarysearch(int arr[],int n,int key){
    int s = 0;
    int e = n;
    
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] ==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"This is a program for linear search."<<endl;
    cout<<" Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<" Enter all the elements in an Array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<" Enter the Element you want to search: ";
    cin>>key;
    // cout<<"The elementyou want to search is at position: "<<linearsearch(arr,n,key)<<endl;
    cout<<"The elementyou want to search is at position: "<<binarysearch(arr,n,key)<<endl;
    return 0;
}