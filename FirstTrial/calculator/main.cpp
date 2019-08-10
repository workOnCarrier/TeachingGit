#include <iostream>
/*
This program runs in a loop.
It waits for user input i.e. <num><operation><num>
It returns  <num><operation><num>=<result>
asks the user if further calculations are needed
if user says 'y' it waits for user input again.
if user says 'n', it exits.
if other input is given, the program shows "Invalid input" and asks the user choice agin
*/

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
