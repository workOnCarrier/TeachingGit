#include<iostream>
using namespace std;
int main(){
    // char button;
    // cout<<"Enter The button you wnat to play: ";
    // cin >> button;
    // if(button == 'a'){
    //     cout<<"Hello"<<endl;
    // }
    // else if(button == 'b'){
    //     cout<<"Hey"<<endl;
    // }
    // else if (button == 'c'){
    //     cout<<"Namaste"<<endl;
    // }
    // else if (button == 'd'){
    //     cout<<"Hasta la Vista!";
    // }

    // One of the way is mentioned above.
    // The other way to do this program is by use of switch statements.

    // switch(button)
    // {
    //     case 'a':
    //         cout<<"Hello"<<endl;
    //         break ;
    //     case 'b':
    //         cout<<"Hola"<<endl;
    //         break;
    //     case 'c':
    //         cout<<"Vanakkam"<<endl;
    //     case 'd' :
    //         cout<<"Hasta la vista"<<endl;
    //         break;

    //     default:
    //         cout<<" I am Still learning more"<<endl;

    // }

    int n1 , n2;
    char operation;
    cout<<" Welcome to Calculator. Enter 2 numbers: ";
    cin >> n1>>n2;
    cout<<" Enter the operation symbol you want to perform: ";
    cin>> operation;
    switch(operation){
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '%':
            cout<<n1/n2<<endl;
            break;
        case '+':
            cout<< n1 + n2<<endl;
            break;
        case '-':
            cout<< n1-n2<< endl;
        default:
        cout<<" The other operations Doesnt Exist";
    }
    
    
    return 0; 
}