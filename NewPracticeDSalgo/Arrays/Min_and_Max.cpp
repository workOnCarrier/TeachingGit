#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minEle = INT_MAX;
    int maxele = INT_MIN;

    for(int i=0;i<n;i++){
        minEle = min(minEle,arr[i]);
        maxele = max(maxele,arr[i]);
    }

    cout<<"Minimum element is : "<<minEle<<endl;
    cout<<"Maximum element is : "<<maxele<<endl;


    return 0;
}