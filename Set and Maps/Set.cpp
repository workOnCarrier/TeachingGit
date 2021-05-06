#include<iostream>
#include<set>
using namespace std;

int main(){
    // // Remember there are no duplicate elements in the set
    // set <int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // // printing of sets
    // for(auto i = s.begin();i!= s.end();i++){
    //     cout<< *i<<" ";
    // }cout<<endl;

    // //Size of set
    // cout<<s.size()<<endl;

    // // print set in reverse
    // for (auto i=s.rbegin();i!=s.rend();i++){
    //     cout<<*i<<" ";
    // }cout<<endl;

    // custom comparator
    // set<int,greater<int>> s;
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(7);
    s.insert(5);

    // Elements will print in descending order due to custom comparator
    // for(auto i = s.begin();i!= s.end();i++){
    //     cout<<*i<<" ";
    // }cout<<endl;

    // Lower Bound and upper Bound
    // cout<<*s.lower_bound(2)<<endl;
    // cout<<*s.lower_bound(3)<<endl;
    // cout<<*s.upper_bound(5)<<endl;

    for(auto i = s.begin();i!=s.end();i++){
        cout<< *i<<" ";
    }cout<<endl<<s.size()<<endl;
    
    s.erase(5);
    
    for(auto i = s.begin();i!=s.end();i++){
        cout<< *i<<" ";
    }cout<<endl<<s.size()<<endl;
    
    s.erase(s.begin());
    
    for(auto i = s.begin();i!=s.end();i++){
        cout<< *i<<" ";
    }cout<<endl<<s.size()<<endl;

    return 0;

}