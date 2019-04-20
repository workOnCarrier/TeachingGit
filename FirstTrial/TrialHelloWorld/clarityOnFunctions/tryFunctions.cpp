#include "stdafx.h"
#include "tryFunctions.h"


double Average(int*a, int number) {
	double sum = 0.0;
	for (int i = 0; i < number; i++) {
		sum += *(a + i);
	}
	double ave = sum / number;
	return ave ;
}
