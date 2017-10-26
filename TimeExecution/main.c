// Simple demonstration of timing a selection of code.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	puts("Timing code execution...");
	// Start timer.
	clock_t startTime = clock();

	// Code to time goes here, for loop below is for example purposes. 
	for (volatile int i = 0; i < (INT_MAX>>2); i++);
	
	// End timer.
	double elapsedTime = ((double)clock() - (double)startTime) / (double)CLOCKS_PER_SEC;

	// Report time.
	printf("Elapsed: %f seconds\n", elapsedTime);
	int c = getchar();
}

