#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int main(){
int pseu = -1;

int Max = INT_MIN;

int arr[] = {6,2,5,4,5,1,6};
int n  = sizeof(arr)/sizeof(arr[0]);
vector<int> l;
vector<int> r;
stack <pi> st;

vector <int> wid;
vector <int> area;

for(int i =0;i<n;i++){
    if(st.empty()) l.push_back(pseu);
    else if(!st.empty()&& st.top().first< arr[i]){
        l.push_back(st.top().second);
    }
    else if(!st.empty()&& st.top().first>=arr[i]){
        while(!st.empty()&& st.top().first>= arr[i]){
            st.pop();
        }
        if(st.empty()) l.push_back(pseu);
        else { l.push_back(st.top().second);}
    }
    st.push({arr[i],i});
}

for(auto i:l){
    cout<<i<<" ";
}cout<<endl;


for(int i =n-1;i>=0;i--){
    if(st.empty()) r.push_back(pseu);
    else if(!st.empty()&& st.top().first< arr[i]){
        r.push_back(st.top().second);
    }
    else if(!st.empty()&& st.top().first>=arr[i]){
        while(!st.empty()&& st.top().first>= arr[i]){
            st.pop();
        }
        if(st.empty()) r.push_back(pseu);
        else { r.push_back(st.top().second);}
    }
    st.push({arr[i],i});
}
reverse(r.begin(),r.end());
for(auto i:r){
    cout<<i<<" ";
}cout<<endl;


for(int i=0;i<n;i++){
    wid.push_back(r[i]-l[i]-1);
}
cout<< "Width: ";
for(auto i:wid){
    cout<<i<<" ";
}cout<<endl;

for(int i=0;i<n;i++){
    area.push_back(wid[i] * arr[i]);
}
for(int i =0;i<n;i++){
    Max = max(area[i],Max);
}

cout<<Max<<endl;

return 0;

}