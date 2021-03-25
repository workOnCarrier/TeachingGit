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

// // Print the nth fibbonacci number
// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }
//     return fib(n-1)+ fib(n-2);
// }
// int main() {
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
// }


//Print Fibonacci series
// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     cout<<"THis is a program to print fibonacci series. Enter a number: ";
//     int n;
//     cin>>n;
//     int fact,f1=0,f2=1;
//     for(int i=1;i<=n;i++){
//         if(i==1){
//             cout<<f1<<"->";
//             continue;
//         }
//         if(i==2){
//             cout<<f2<<"->";
//             continue;
//         }
//         fact = f1+f2;
//         cout<<fact<<"->";
//         f1 = f2;
//         f2 = fact;
//     }
//     cout<<"End"<<endl;
//     return 0;
// }

// Calculate x^n using recursion
#include<bits/stdc++.h>
using namespace std;

int power(int base,int exp){
    if(exp==0){
        return 1;
    }
    int prev = power(base,exp-1);
    return base*prev; 

}
int main(){
    int base =2;
    int exp =2;
    cout<<"Answer is"<<power(base,exp)<<endl;
    return 0;
}
