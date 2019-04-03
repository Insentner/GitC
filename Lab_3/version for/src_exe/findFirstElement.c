#include <head.h>

int findFirstElement(double eps)
{
	int i;
	for (i = 0; ; ++i)
	{
		if (fabs(a(i)) <= eps)
		{
			break;
		}
	}
	return i;
}