#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr [] = {1,3,2,4};
    vector<int> res;
    stack<int> st;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        if(st.empty()){
            res.push_back(-1);
        }
        else if(!st.empty()&& st.top()>arr[i]){
            res.push_back(st.top());
        }
        else if(!st.empty()&& st.top()<= arr[i]){
            while(!st.empty()&& st.top()<= arr[i]){
                st.pop();
            }
            if(st.empty()) res.push_back(-1);
            else{
                res.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }

    for(auto i:res){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}