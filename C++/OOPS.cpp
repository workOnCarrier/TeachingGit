// User defined Datatype..

#include<bits/stdc++.h>
using namespace std;
class student{
    string name; 
    public:
      // Data Members of a class
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }

    student(string s,int a, int g){
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age =a;
        gender = g;

    }// Parameterised Constructor

    student(student &a){
        cout<<" Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;

    }

    ~student(){
        cout<<" Destructor called "<<endl; 
    }

    void setname(string s){
        name = s;  // Function to use private data member outside class.
    }

    void getname(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }else{
            return false;
        }
    }



};


int main() 
{
    // student arr[3];
    // for(int i = 0;i<3;i++){
    //     cout<<"Name = ";
    //     string s;
    //     cin>>s;
    //     arr[i].setname(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // } 

    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }

    student a("Urvi",20,1);
    // a.printInfo();
    
    student b;
    // student c = a; // Default copy constructor

    student c = a; // Own made copy constructor

    if (c==a) {
        cout<<"Same "<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }


    return 0;
}