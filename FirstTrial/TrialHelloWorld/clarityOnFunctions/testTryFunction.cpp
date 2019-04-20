

#include "stdafx.h"
#include "tryFunctions.h"
#include <iostream>


void tryFunction_with_randomArray() {
	int A[] = { 2,3,6,7,12,32 };
	double average = Average(A, 6);
	double expectedAverage = 10.3333;
	double error = 0.0001;
	if ( abs(average - expectedAverage) > error) {
		std::cout << "the values do not match:" << expectedAverage << ":" << average << std::endl;
	}
	else {
		std::cout << "SUCCESS the values match:" << expectedAverage << ":" << average << std::endl;
	}
}