#include <head.h>

void f(const double *x, double *result)
{
	*result = 2 * pow(cos(*x), 2) - 1;
}