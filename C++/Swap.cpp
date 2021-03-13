#include<iostream>
using namespace std;

void swap (int a, int b){
    int temp=a;
    a = b;
    b=temp; 
    cout<<a<<endl<<b<<endl;
    
}

int main(){
    cout<<"Enter 2 No.s: ";
    int a,b;
    cin>>a>>b;
    cout<<"Before Swapping :"<<endl<<a<<endl<<b<<endl;
    cout<<"after swapping: "<<endl;
    swap(a,b);
    return 0;
}