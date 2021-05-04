#include<bits/stdc++.h>
using namespace std;

char next_ele(string s, char ele){
    int start = 0;
    int end  = s.size()-1;
    char res = '#';
    while(start<=end){
        int mid  = (start+end)/2;
        if(s[mid]==ele){
            start = mid+1;
        }
        else if(s[mid]<ele){
            start = mid+1;
        }
        else{
            res  = s[mid];
            end = mid-1;
        }
    }
    return res;
}


int main(){
    string s = "acfhj";
    char ele = 'f';

    char next  = next_ele(s , ele);
    cout<<next<<endl;

    return 0;
}