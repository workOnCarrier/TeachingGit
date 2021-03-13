#include<iostream>

#include<string>

using namespace std;
int main() {
    string s1;
    // s1 = "Appple"
    // for(int i(0);i <s1.length();++i)
    //     cout<<s1[i]<<endl;


    //Substring

    // cout<<"This is an Example of a substring"<<endl;
    // s1 = "This is a Test";
    // cout<<s1.substr(0,4)<<endl;
    // cout<<s1.substr(5,2)<<endl;

    //Find

    s1 = "The Secret name is Boo";

    string word;
    cout<< " Enter the word you want to find out: ";
    cin>>word;

    size_t position = s1.find(word);
    if (position != string::npos)
        cout<< "The Word "<<word<<" is found out"<<endl;

    else
        cout<<"It Doesn't Exist.."<<endl;

    return 0;
}