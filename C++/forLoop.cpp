// #include <iostream>
// using namespace std;

// int main() {
//     /*
//     // Write I am a programmer for 5 times..
//     for (int i =1;i<=5;i++){
//         cout<<"I am a programmmer"<<endl;
//     }
//     */
    
//     // // Wap to print multiplication table of 5
//     // int x = 5;
//     // for (int i =1;i<=10;i++){
//     //     cout<<x<<" * "<<i<< " = "<<(x*i)<<endl;
//     // }

//     //Find the summ of all natural numbers till n.
//     // int n;
//     // cout<<"Enter the value of n : ";
//     // cin >> n;
//     // int sum = 0;
//     // for (int counter = 0;counter<=n;counter++){
//     //     sum = sum + counter;
//     // }
//     // cout<<" The sum of first "<< n<<" natural numbers is : "<<sum<<endl;


//     //Program table to display multiplicatoin table upto 10

//     // int i;
//     // cout<<" Write the number for which you want to display the multiplication table: ";
//     // cin>>i;
//     // for(int j =1;j<=10;j++){
//     //     cout<<i<<" * "<<j<<" = "<<(i*j)<<endl;
//     // }
//     // return 0;

//     // WAP to enter only positive numbers.
//     int sum = 0;
//     int number;
//     cout<<" This is a program to print sum of all positie numbers.Whenever you want to exit this program just enter'Quit'"<<endl;
//     cout<<" Enter a number: ";
//     cin>> number;
//     while(number>=0){
//         sum+=number;
//         cout<<"Enter a number: ";
//         cin>>number;
//     }   
    
    
//     cout<<' The sum of all positive numbers you added is: '<<sum<<endl;
//     return 0;
// }



// Bonus Problem: To find the greatest of three numbers.
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter 3 Numbers : ";
    int x,y,z;
    cin>>x>>y>>z;

    cout<<" The greatest of the 3 No.s is : ";
    if(x>y){
        if(x>z){
            cout<<x<<endl;
        }else{
            cout<<z<<endl;
        }
    }
    else if(y>x){
            if(y>z){
                cout<<y<<endl;
            }else{
                cout<<z<<endl;
            }
    } 
    return 0;        
}
