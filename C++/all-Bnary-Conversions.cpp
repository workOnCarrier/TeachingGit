// Binary to Decimal.
#include<bits/stdc++.h>

using namespace std;

// int BinarytoDecimal(int n){
//     int ans=0;
//     int x=1;
//     while(n>0){
//         int y= n%10;
//         ans+= x*y;
//         x*=2;
//         n /= 10; 
//     }
//     return ans;
// }
// // Octal to Decimal Same case replace by 8.


// int main(){
//     cout<<"Binary Number : ";
//     int n;
//     cin >> n;
//     cout<<"Decimal Number :" ;
//     cout<< BinarytoDecimal(n)<<endl;
//     return 0;

// }

// Now as hexadecimal include special characters. So we will include something new.

int HexadecimaltoDecimal(string n){
    int ans =0;
    int x =1;
    
}

int main(){
    cout<<"Hexadecimal Number : ";
    string n;
    cin >> n;
    cout<<"Decimal Number :" ;
    cout<< HexadecimaltoDecimal(n)<<endl;
    return 0;

}