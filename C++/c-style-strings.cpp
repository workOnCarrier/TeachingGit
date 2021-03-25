#include<iostream>
using namespace std;
#include <cstring>
#include <cctype>

int main() {
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // cout<<" Enter your first name : ";
    // cin>> first_name;
    // cout<<"Your "<<first_name<<" has "<<strlen(first_name)<<" Characters"<<endl;
    // cout<< "Enter your last name : ";
    // cin >> last_name;
    // cout<<"Your last name "<<last_name<<" has "<<strlen(last_name)<<" Characters."<<endl;
    
    // strcpy(full_name,first_name);
    // strcat(full_name," ");
    // strcat(full_name,last_name);

    // cout<<full_name<<" is your Full name Right ? "<<endl;


    cout<<" Enter your Full name: ";
    cin.getline(full_name,50);
    cout<<full_name<<endl;
    

}