#include<bits/stdc++.h>
using namespace std;


bool balanced_parentheses(string s){
    int n = s.size();
    stack <int>st;
    bool ans = true;
    for(int i=0;i<n;i++){
        if(s[i]=='('|| s[i]=='{'||s[i]=='[') st.push(s[i]);
        else if(s[i]==')'){
            if(st.top()=='('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }else if(s[i]=='}'){
            if(st.top()=='{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }else if(s[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        
    }
    if(!st.empty()) ans  = false;
    return ans;
}

int main(){
    string s = "{([])}";
    if(balanced_parentheses(s)){
        cout<<"String is balanced\n";
    }
    else{
        cout<<"Not Balanced\n";
    }

    return 0;
}