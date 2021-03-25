#include<bits/stdc++.h>
using namespace std;

void reverse(int num){
    int rev_num =0;
    while(num>0){
        int lastdigit = num%10;
        rev_num = rev_num*10+ lastdigit;
        num/=10;
    }
    cout<<rev_num;
}


int main() {
    int T;
    cin>>T;
    int num;
    while(T>0){
        cin>>num;
        reverse(num);
        cout<<endl;
        T--;
    }

    return 0;   
}