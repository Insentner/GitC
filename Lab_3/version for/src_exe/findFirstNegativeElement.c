#include <head.h>

int findFirstNegativeElement(double eps)
{
	for (int i = 0; ; ++i)
	{
		if(fabs(a(i)) <= eps && a(i) < 0)
		{
			return i;
		}
	}
}