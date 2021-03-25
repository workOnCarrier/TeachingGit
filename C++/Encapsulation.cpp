// Hiding unecessary details.. Also known as Encapsulation



// Inheritance
// Derived Class (child) - the class that inherits from other class
// Base Class(Parent)- the class being inherited from

// Single Inheritance

// #include<bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//         void func(){
//             cout<<"Inherited"<<endl;
//         }
// };
// class B : public A{
// };

// int main(){
//     B b;
//     b.func();
//     return 0;
// }


// Multiple inheritance

// #include<bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//         void Afunc(){
//             cout<<"Func A"<<endl;
//         }
// };
// class B{
//     public:
//         void Bfunc(){
//             cout<<"Func B"<<endl;
//         }
// };

// class C: public A,public B{
//     public:
// };

// int main() {
//     C c;
//     c.Afunc();
//     c.Bfunc();
//     return 0;
// }

// Multi-level Inheritance

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void Afunc(){
            cout<<" Func A"<<endl;
        }
};
class B: public A{
    public:
        void Bfunc(){
            cout<<" Func B"<<endl;
        }
};
class C: public B{
    public:
};
int main(){
    C c;
    c.Afunc();
    c.Bfunc();
}