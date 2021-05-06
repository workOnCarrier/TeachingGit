#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> MarksMap;
    MarksMap["Raghav"] = 100;
    MarksMap["Amisha"] = 98;
    MarksMap["Pandey"] = 100;

    for(auto  i = MarksMap.begin();i!= MarksMap.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }



    return 0; 
}