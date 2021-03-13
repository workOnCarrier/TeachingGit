// #include<iostream>
// using namespace std;
// #include<math.h>

// bool isPrime(int num){
//     for (int i = 2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
        
//     }
//     return true;
// }

// int main() {
//     int a,b;
//     cin>>a>>b;
//     for(int i = a;i<b;i++){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// } 

// //Fibbonacci Sequence
// #include<iostream>
// using namespace std;
// int main() {
//     int t1 = 0;
//     int t2 = 1;
//     int nextterm;
//     cout<<"Enter the number upto which you want to pront fibbonacci Sequence: ";
//     int n;
//     cin>>n;
//     for(int i = 1; i<=n;i++){
//         cout<<t1<<endl;
//         nextterm = t1+t2;
//         t1 = t2;
//         t2 = nextterm;
//     }
//     return 0 ;
// }

//Factorial
#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=n;i>0;i--){
        fact = fact*i;
    }
    return fact;
}

int main(){
    // cout<<"Enter the Number for which you want to print factorial: ";
    // int n;
    // cin>>n;
    // int ans=factorial(n);
    // cout<<ans<<endl;

    //nCr
    // int n,r;
    // cin>>n>>r;
    // int ans = factorial(n)/(factorial(r)*factorial(n-r));
    // cout<<n<<"C"<<r<<" = "<<ans;

    // Pascal Triangle
    int n;
    cin>> n;
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<< factorial(i)/(factorial(i-j)*factorial(j))<<" ";
        }
        cout<<endl;
    }
    return 0; 
}