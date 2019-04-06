#include <head.h>

double summ2(double eps)
{
	double sum = 0;
	int i = 0;
	while (fabs(a(i+1)-a(i))>=eps)
	{
		sum +=a(i);
		++i;
	}
	return sum;
}