/*
#include<bits/stdc++.h>
using namespace std;

int Sum(int n){

    if(n==0){
        return 0;
    }
    int prevSum = Sum(n-1);
    return n+prevSum;
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n);
    return 0;
}
*/


// // Calculate n raise to power p times.
// #include<bits/stdc++.h>
// using namespace std;

// int power(int n , int p){

//     if(p == 0){
//         return 1;
//     }

//     int prevpower = power(n,p-1);
//     return n*prevpower;
// }

// int main(){
//     int n,p;
//     cin>>n>>p;
//     cout<<power(n,p);
//     return 0;

// }


// // Factorial of a number..
// #include<bits/stdc++.h>
// using namespace std;

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     int prevfactorial = factorial(n-1);
//     return n*prevfactorial;
// }

// int main() {
//     int n;
//     cin>>n;
//     cout<<factorial(n)<<endl;
//     return 0;
// }

// Print the nth fibbonacci number
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fib(n-1)+ fib(n-2);
}
int main() {
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}