#include <stdio.h>
#include <math.h>

double x = 7.5;
double result;

void f(void)
{
	result = 2 * pow(cos(x), 2) - 1;
}