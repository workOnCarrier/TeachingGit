#include <iostream>


using namespace std;

int main (){
    int a , b ;
	char op;
	cin >> a >> op >> b;
	int c ;
	if ( op == '+' )  c = a+b;
	if ( op == '-' )  c = a-b;
	if ( op == '/' )  c = a/b;
	if ( op == '*' )  c = a*b;
	cout << a << op << b  << "=" << c << endl;
}
