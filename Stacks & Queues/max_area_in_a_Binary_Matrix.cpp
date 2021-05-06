#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
int MAH(vector<int> &arr){
    int pseu = -1;
    int psr = arr.size();

    int Max = INT_MIN;
    int n  = arr.size();
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



    for(int i =n-1;i>=0;i--){
        if(st.empty()) r.push_back(psr);
        else if(!st.empty()&& st.top().first< arr[i]){
            r.push_back(st.top().second);
        }
        else if(!st.empty()&& st.top().first>=arr[i]){
            while(!st.empty()&& st.top().first>= arr[i]){
                st.pop();
            }
            if(st.empty()) r.push_back(psr);
            else { r.push_back(st.top().second);}
        }
        st.push({arr[i],i});
    }
    reverse(r.begin(),r.end());


    for(int i=0;i<n;i++){
        wid.push_back(r[i]-l[i]-1);
    }
  
    for(int i=0;i<n;i++){
        area.push_back(wid[i] * arr[i]);
    }
    for(int i =0;i<n;i++){
        Max = max(area[i],Max);
    }

    return Max;

}

int main(){
    int n = 4;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    vector<int>v;
    for(int j=0;j<n;j++){
        v.push_back(a[0][j]);
    }
    int MX  = MAH(v);
    for(int i=1;i<n;i++){ 
        for(int j=0;j<n;j++){
            if(a[i][j]==0) v[j] =0;
            else{
                v[j] = v[j] + a[i][j];
            }
        }
        MX = max(MX,MAH(v));
    }
    cout<<MX<<endl;

    return 0;
}