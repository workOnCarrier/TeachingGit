// goodForLoopPuzzle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int display() {
	printf("replcement of j++\n");
	return 1;
}

int main()
{
	int i = 2, j = 1;
	// for (--i && ++j; i < 10; i += 2)
	bool value = --i || display();
	if ( value )
	{
		printf("value is true");
	}
	else {
		printf("value is false");
	}

	for (; i < 10; i += 2)
	{
		printf("loop ");
	}
	printf("\n%d", j);
    return 0;
}

