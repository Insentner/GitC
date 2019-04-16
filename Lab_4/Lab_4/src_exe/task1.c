#include <stdio.h>
#include <math.h>

double X;
double res;
static double *x=&X;
double *result = &result;

void f(static double *x, double *result)
{
	*result = 2 * pow(cos(*x), 2) - 1;
}

void main(void)
{
	f(x, result);
	printf("f(x)=%.4lf", result);
	system("pause");
}