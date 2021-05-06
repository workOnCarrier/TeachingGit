#include<bits/stdc++.h>
using namespace std;

<<<<<<< HEAD

int Evaluate_Postfix( string s){
    stack<int> st;
    for(int i =0;i<s.length();i++){
        if(s[i]>='0' && s[i]<= '9'){
=======
int prefix_Expression(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&& s[i]<='9'){
>>>>>>> 8a60745494b4f5116f417c2e9090b803fd0093bb
            st.push(s[i]-'0');
        }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
<<<<<<< HEAD

            switch(s[i]){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
=======
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
>>>>>>> 8a60745494b4f5116f417c2e9090b803fd0093bb
            }
        }
    }
    return st.top();
}

<<<<<<< HEAD
int main() {

    cout<<Evaluate_Postfix("46+2/5*7+")<<endl;
    return 0;
}

// Thereas just a min difference that here we need to observe the operands.
=======
int main(){
    string s = "46+2/5*7+";
    cout<<prefix_Expression(s)<<endl;

    return 0;
}
>>>>>>> 8a60745494b4f5116f417c2e9090b803fd0093bb
