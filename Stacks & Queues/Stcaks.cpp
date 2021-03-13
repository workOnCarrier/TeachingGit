#include<iostream> // Cannot use bits/stdc++ as stack is already defined and it gives an error of ambiguity..IF anything like this happens, just put"S" in 'stack'
using namespace std;
#define n 100

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if (top == n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"No more elements can be removed"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top == -1){
            cout<<"No more element at the top"<<endl;
            return -1;
        }
        return arr[top];
    }
    
    bool empty(){
        return top == -1;
    }
    
};

int main(){
    
    stack st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;

    return 0;
}