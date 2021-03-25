#include<iostream>
using namespace std;
int main() {
    // A program to print all numbers divisible by 3 from 1 to 100.
//     for (int i = 0;i <=100;i++){
//         if (i%3 == 0){
//             continue;
//         }
//         cout<<i<<endl;
    
//     }

    // Program to check whether a number is prime or not.

    // int n;
    // cout<<"Check Whether a number is prime or not. Enter a number: ";
    // cin>>n;
    // int i;
    // for (i = 2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"Non prime";
    //         break;
    //     }
    // }
    // if (i==n){
    //     cout<< "Prime";
    // }

    // Print all prime number ranging between a and b.
    int a,b;
    cout<< " Enter a range in which you want to print all the prime numbers: ";
    cin>>a>>b;
    int i;
    for(int num=a;num <=b;num++){
        for(i =2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if( i == num){
            cout<< num<<endl;
        }
    }

    return 0;
}