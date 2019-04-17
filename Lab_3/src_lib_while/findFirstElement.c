#include <head.h>

int findFirstElement(double eps)
{
	int i=0;
	while (1)
	{
		if (fabs(a(i)) <= eps)
		{
			break;
		}
		++i;
	}
	return i;
}