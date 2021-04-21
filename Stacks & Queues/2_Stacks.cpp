#include<iostream>
using namespace std;

class Stack{
    int * arr;
    int size;
    int top1,top2;
    public:
    Stack(int n){
        size = n;
        arr = new int [n];
        top1 = -1;
        top2 = size;
    }

    void push1(int val){
        if(top1<top2-1){
            top1++;
            arr[top1] = val;
        }
        else{
            cout<<"stack overflow\n";
            return;
        }
    }
    void push2(int val){
        if(top2-1>top1){
            top2--;
            arr[top2] = val;
        }
        else{
            cout<<"Stack Overflow\n";
            return;
        }
    }
    void pop1(){
        if(top1>=0){
            int x = arr[top1];
            top1--;
        }
        else{
            cout<<"Stack Underflow\n";
        }
    }
    int pop2(){
        if(top2<=size-1){
            int x  =  arr[top2];
            top2++;
            return x;
        }
        else{
            cout<<"Stack Underflow\n";
            exit(1);
        }
    }
    int display1(){
        return arr[top1];
    }
    int display2(){
        return arr[top2];
    }
};



int main(){
    Stack st(6);
    st.push1(1);
    st.push1(2);
    st.push1(4);
    st.push2(7);
    st.push2(40);
    cout<<st.pop2()<<endl;
}