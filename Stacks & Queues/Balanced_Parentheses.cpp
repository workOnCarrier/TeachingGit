#include<iostream>
#include<stack>
#include<string>

using namespace std;
bool ArePair(char opening, char closing){
    if(opening== '(' && closing == ')') return true;
    else if(opening== '{' && closing == '}') return true;
    else if(opening== '[' && closing == ']') return true;
    return false;
}

bool BalancedParentheses(string expr){
    
    stack<char> st;
    for(int i=0;i<expr.length();i++){
        if(expr[i] == '{' || expr[i]=='['|| expr[i] == '(') 
            st.push(expr[i]);
        else if(expr[i]== '}' || expr[i] == ']'|| expr[i] == ')'){
            if(st.empty()|| !ArePair(st.top(),expr[i])) 
                return false;    
            else
                st.pop();
            
        }
    }
    
    return st.empty() ? true:false ;
}

int main() {
    string expr  = "{}";
    if(BalancedParentheses(expr))
        cout<<"Balanced!! \n";
    else
        cout<<"Not Balanced"<<endl;


}