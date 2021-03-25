// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<" Enter the size of an Array: ";
//     cin>>n;
//     int array[n];
//     cout<<" ENter elements in an array";
//     int maxNo = INT_MIN;
//     int minNo = INT_MAX;
    
//     for(int i =0;i<n;i++){
//         cin>> array[i];
//     }

//     for(int i = 0;i<n;i++){
//         maxNo = max(maxNo,array[i]);
//         minNo = min(minNo,array[i]);
//     }
//     cout<<" THe maximum of these listg of arrays is: "<<maxNo<<endl;
//     cout<<" The Minimum of these list of arrays is:  "<<minNo<<endl;
//     return 0;

// }

// Running the sum of an Array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of an Array: ";
    cin>>n;
    int sum=0;
    int arr[n];
    cout<<" Enter all the elements of an Array: ";
    for(int i=0;i <n;i++){
        cin>> arr[i];
    }
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    cout<<" The sum of all Elements of an Array is: "<< sum<<endl;

    
}

























