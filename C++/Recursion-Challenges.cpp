// // Check if an array is sorted or not using recursion.

// #include<bits/stdc++.h>
// using namespace std;

// bool sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restArray =
    
//      sorted(arr+1,n-1);
//     return (arr[0]<arr[1] && restArray);
// }

// int main() {
//     int arr[] = {1,6,3,4,5};
//     cout<<sorted(arr,5)<<endl;
//     return 0;     
// }

// Numbers till N in Inc Order
#include<bits/stdc++.h>
using namespace std;
// 
void PrintTillNdec(int n){
    if(n==0){
        cout<<"NULL"<<endl;
        return;
    }
    cout<<n<<" -> ";
    PrintTillNdec(n-1);
}
// Increasing Order
void PrintTillNinc(int n){
    if(n==0){
        cout<<"NULL"<<endl;
        return;
    }
    PrintTillNinc(n-1);
    cout<<n<<" -> ";
}


int main(){
    PrintTillNdec(5);
    PrintTillNinc(5);

    return 0;
}