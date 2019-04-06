#include <head.h>

int findFirstElement(double eps)
{
	int i=0;
	do
	{
		if (fabs(a(i)) <= eps)
		{
			++i;
			break;
		}
		++i;
	} while (1);
	return i-1;
}