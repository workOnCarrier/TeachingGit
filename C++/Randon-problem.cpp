#include<iostream>
using namespace std;
int main(){
    cout<<"Display all the factors of this number : ";
    int n,i;
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}