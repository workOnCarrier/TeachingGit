// #include<bits/stdc++.h>
// using namespace std;

// bool pairsum(int arr[],int n,int k){
//     for(int i =1;i<n-1;i++){
//         for(int j = i;j<n;j++){
//             if(arr[i]+arr[j] == k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }    
//     return false;
// }


// int main()
// {
//     int arr[] = {2,4,7,11,14,16,20,21};
//     int k = 31;

//     cout<<pairsum(arr,8,k);



//     return 0;
// } // But its time complexity is of the order of O(n^2)


// So we can do it in O(n)
#include<bits/stdc++.h>
using namespace std;

bool pairsum(int arr[],int n,int k){
    int low = 0;
    int high  = n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}



int main() {
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;
    cout<<pairsum(arr,8,k);
    
    return 0;
