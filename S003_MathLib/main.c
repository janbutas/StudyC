#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void) {
	double x = sin(M_PI*2);
	printf("2*pi = %f\n",M_PI*2 );
	printf("sin(2*pi) = %f\n", x);
	return EXIT_SUCCESS;
}

