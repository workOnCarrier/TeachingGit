// TrialHelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

void display(int n);
void maxOneGroup(int n);
int main()
{
	int num = 439;
	while (true) {
		cin >> num;
		display(num);
		maxOneGroup(num);
	}
	return 0;
}
void display(int n){
	typedef struct  {
		int num;
		char view[33];
	} LetsSee;
	LetsSee see;
	see.num = n;
	// cout << see.view << endl;
	int oneCount;
	for( auto i = 0; i < 32; i++ ) {
		if (see.num & 1) {
			see.view[31-i] = '1';
		}
		else {
			see.view[31-i] = '0';
		}
		see.num = see.num >> 1;
	}
	see.view[32] = '\0';
	printf("%s\n", see.view);
}

void maxOneGroup(int n) {
	int oneCount{ 0 }, maxOneCount{ 0 };
	while (n) {
		if ((n & 1))oneCount++;
		else {
			if (oneCount > maxOneCount) {
				maxOneCount = oneCount;
			}
			oneCount = 0;
		}
		n = n >> 1;
		display(n);
	}
	if (oneCount > maxOneCount) {
		maxOneCount = oneCount;
	}
	cout << maxOneCount << endl;
}
