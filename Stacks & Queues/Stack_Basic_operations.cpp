#include<iostream>

#define n 100
using namespace std;

class Stack{
    
    int *arr;
    int top;

    public:
    Stack(){
        arr  = new int[n];
        top = -1;
    }
    void push(int val){
        if(top == n-1){
            cout<<"Stack Overflow\n";
            return ;
        }
        top++;
        arr[top] = val;
    }
    void pop(){
        if(top== -1){
            cout<<"Stack Underflow\n";
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }


};
int main(){
    Stack st;
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.isEmpty()<<endl;

    return 0;
}