#include <stdio.h>


void main(void)
{
	double X = 9;
	double res;
	const double *x = &X;
	double *result = &res;

	f(x, result);
	printf("f(x)=%.4lf\n", result);
	system("pause");
}