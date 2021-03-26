#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    stack<char> st;

    cout<<"Enter the String: ";
    cin>>str;

    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }

    cout<<"THe output name is: ";
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }cout<<endl;

}