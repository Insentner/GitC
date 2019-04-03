#include <math.h>

double f(double x)
{
	if (x < 3.2)
	{
		return pow(x, 4) + 9;
	}
	else
	{
		return 54 * pow(x, 4) / (-5 * pow(x, 2) + 7);
	}
}