#include<bits/stdc++.h>
using namespace std;

vector<int> NGL(int arr[],int n){
    stack<int> st;
    vector<int> res;
    for(int i  = n-1;i>=0;i--){
        if(st.empty()){
            res.push_back(-1);
        }
        else if(st.size()>0 && st.top()>arr[i]){
            res.push_back(st.top());
        }
        else if(st.size()>0 && st.top()<=arr[i]){
            while(!st.empty()&& st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                res.push_back(-1);
            }
            else{
                res.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }
    reverse(res.begin(),res.end());
    return res;
}


int main(){
    int arr [] =  {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> res  = NGL(arr,n);
    
    for(auto i : res){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}