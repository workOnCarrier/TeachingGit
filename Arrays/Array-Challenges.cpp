// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int mx=INT_MIN;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin>> arr[i];
//     }
//     for(int i =0;i<n;i++){
//         mx = max(mx,arr[i]);
//         cout<<endl;
//     }
//     return 0;
// }


// Sum of all Subarrays.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int curr = 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n;i++){
        curr = 0;
        for(int j =i;j<n;j++){
            curr += arr[j];
            cout<<curr<<endl;
        }
    }

    return 0;
}


















