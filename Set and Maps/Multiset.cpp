#include<bits/stdc++.h>
using namespace std;


int main(){
    multiset<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    // But this will delete multiple occurences of 3
    // s.erase(3);
    // for(auto i:s){
    //     cout<<i<<" ";
    // }cout<<endl;

    // to delete single occurence 
    s.erase(s.find(3));
    
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    

    return 0;
}