<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int ele){
    
    if(st.empty()){
        st.push(ele);
        return;
    }
    
    int topele = st.top();
    st.pop();
    insertAtBottom(st,ele);

    st.push(topele); 
}


void reverseStack(stack <int> &st){
    
    if(st.empty()){
        return;
    }
    
    int ele = st.top();
    st.pop();
    reverseStack(st);

    insertAtBottom(st,ele);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<"After reversing: "<<endl;

    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }cout<<endl;    


    return 0;

=======
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele  = st.top();
    st.pop();
    insertAtBottom(st,ele);

    st.push(topele);
}

void Reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    Reverse(st);
    insertAtBottom(st,ele);

}
void Display(stack <int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

int main(){
    stack <int> st;
    st.push(11);
    st.push(13);
    st.push(15);
    st.push(16);
    st.push(17);
    st.push(18);
    st.push(19);

    Display(st);
    Reverse(st);
    Display(st);


    return 0;
>>>>>>> 8a60745494b4f5116f417c2e9090b803fd0093bb
}