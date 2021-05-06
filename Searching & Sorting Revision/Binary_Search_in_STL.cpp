#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a = {1,2,3,5,7,8,9};
    cout<<lower_bound(a.begin(),a.end(),3)-a.begin();
    cout<<upper_bound(a.begin(),a.end(),3)-a.begin();

    return 0;
}