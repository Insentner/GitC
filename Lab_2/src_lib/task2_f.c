#include <head.h>

double f(double x)
{
	return (x < 3.2) ? pow(x, 4) + 9 : 54 * pow(x, 4) / (-5 * pow(x, 2) + 7);
}