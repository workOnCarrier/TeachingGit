// #include<bits/stdc++.h>
// using namespace std;
// int main() {

//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=0;i<n;i++){
//         for(int j =i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<a[k]<<" ";
//             }cout<<endl;
//         }
//     }




//     return 0;
// }


// //Maximum sum of a SubArray
// //Brute Force Sum Approach
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxSum = INT_MIN;
//     for(int i =0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum =0;
//             for(int k =i;k<=j;k++){
//                 sum+=a[k];
//             }
//             maxSum = max(maxSum,sum);
//         }
//     }
//     cout<<maxSum;


//     return 0;
// }



// // Same Question to reduce the time Complexity becoz its n^3 . 
// //Cumulative sum approach.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int currsum[n+1];
//     currsum[0] = 0;
//     for(int i =1;i<=n;i++){
//         currsum[i] = currsum[i-1]+a[i-1]; 
//     }
//     int maxSum = INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum = 0;
//         for(int j =0;j<i;j++){
//             sum = currsum[i] - currsum[j];
//             maxSum = max(sum,maxSum);
//         }
//     }
//     cout<<maxSum;



//     return 0;
// }


// Same question in O(n).
// Kadane's Algorithm.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum <0){
            currSum = 0;
        }
        maxSum = max(currSum,maxSum);
    }
    cout<<maxSum;
    return 0;
}