#include<iostream>
using namespace std;
int main(){
    cout<<"Lets find out factorial of this given number: ";
    int n;
    cin>>n;
    int factorial = 1;
    for(int i = n; i>0;i--){
        factorial = factorial*i;
    }
    cout<<"Factorial:"<<factorial;

    return 0; 
}