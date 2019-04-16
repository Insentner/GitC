#include <head.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;
	do
	{
		if(fabs(a(i)) <= eps && a(i) < 0)
		{
			return i;
		}
		++i;
	}while (1);
}