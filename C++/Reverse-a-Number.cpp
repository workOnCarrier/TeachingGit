#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    // int reverse = 0;
    // while(n>0){
    //     int lastdigit = n%10;
    //     reverse = reverse*10 + lastdigit;
    //     n = n/10;
    // }
    // cout<< reverse;

    // Check whether a number is armstrong number.
    int sum = 0;
    int originaln = n;
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n = n/10;


    }
    if(sum==originaln){
        cout<<" THis is an Armstrong number ";
    }else{
        cout<<"Not an Armstrong Number";
    }

    return 0;
}