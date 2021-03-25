// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int a =10;
//     int* aptr = &a;
//     cout<<*aptr<<endl;
//     *aptr = 20;
//     cout<<a<<endl;
//     cout<<aptr<<endl;

//     aptr++;
//     cout<<aptr;
//     return 0;
// }


// // Passing pointers to a function.
// #include<bits/stdc++.h>
// using namespace std;

// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){

//     int a =2;
//     int b =4;
//     int* aptr = &a;
//     int* bptr =&b;
//     cout<<a<<" "<<b<<endl;

//     swap(aptr,bptr); // Call by refrence.
//     cout<<a<<" "<<b<<endl;

//     return 0;
// }


// Incrementing A.
#include<bits/stdc++.h>
using namespace std;

void increment(int *a){
    *a++;
}


int main(){
    int a = 10;
    cout<<a<<endl;;

    increment(&a);
    cout<<a<<endl;
}




























