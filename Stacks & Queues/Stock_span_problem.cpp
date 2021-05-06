#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {100,80,60,70,60,75,85};
    int n  = sizeof(arr)/sizeof(arr[0]);

    stack<pair<int,int>> st;
    vector<int>v;

    for (int i=0;i<n;i++){
        if(st.empty()){
            v.push_back(-1);
        }
        else if(!st.empty()&& st.top().first >arr[i]){
            v.push_back(st.top().second);
        }
        else if(!st.empty() && st.top().first<= arr[i]){
            while(!st.empty()&& st.top().first<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(st.top().second);
            }
        }
        st.push({arr[i],i});
    }
    for(int i =0;i<n;i++){
        v[i] = i - v[i];
    }
    for(auto i:v){
        cout << i <<" ";
    }cout<<endl;


    return 0;
}