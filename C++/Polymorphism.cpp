// Polymorphism

// Function Overloading
// #include<bits/stdc++.h>
// using namespace std;

// class ApnaCollege{
//     public:
//         void fun(){
//             cout<<" I am a functio with bo arguments"<<endl;

//         }

//         void fun(int x){
//             cout<<"I am a function with int argument"<<endl;
//         }

//         void fun(double x){
//             cout<<"I am a function with double arguments"<<endl;
//         }
// };

// int main(){
//     ApnaCollege obj;
//     obj.fun();
//     obj.fun(4);
//     obj.fun(6.77);
//     return 0;
// }


// //Operator overloading
// #include<bits/stdc++.h>
// using namespace std;

// class Complex{
//     int real,imag;
//     public:
//         Complex(int i,int r){
//             real = r;
//             imag = i;
//         }
//         Complex operator + (Complex const &obj){
//             Complex res;
//             res.imag = imag + obj.imag;
//             res.real = real + obj.real;
//             return res;
//         }

//         void display(){
//             cout<<real<<" +i"<<imag<<endl;
//         }
// };

// int main() {
//     Complex c1(2,5);
//     Complex c2(12,5);
//     Complex c3 = c1+c2;
//     c3.display();
// }



// Run-time Polymorphism (Virtual FUnctions- Function Overriding)
 