// HAlf Pyramid
#include<iostream>
using namespace std;

int main(){

    // for(int i = 1; i<= 6;i++){
    //     for (int j=1;j<=i;j++){
    //         cout<<"*";
    //     };
    //     cout<<endl;
    // };

    // Reverse half pyramid
    for(int i = 6; i>=1;i-- ){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
