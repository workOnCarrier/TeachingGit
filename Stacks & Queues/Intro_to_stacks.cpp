//Array implementation of stack

#include<iostream>
#define MAX_SIZE 101
using namespace std;

int A[MAX_SIZE];
int top = -1;

void Push(int x){
    if(top == MAX_SIZE-1){
        cout<<"Stack Overflow! \n";
        return;
    }
    A[++top] = x;
}
void pop(){
    if(top == -1){
        cout<<"Stack underflow \n";
        return;
    }
    top--; 
}
int Top(){
    return A[top];
}
bool isEmpty(){
    if(top ==-1) return true;
    else return false;
}


void Print(){
    int i;
    cout<<"Stack: ";
    for(int i=0;i<=top;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cout<<isEmpty()<<endl;
    Push(2);
    Push(4);
    Push(6);
    Push(8);
    Push(9);
    Push(11);Print();
    cout<<isEmpty();

    return 0;
}