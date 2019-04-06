#include <head.h>

void print(int n, int k)
{
	int i = 0;
	while (i < n)
	{
		if (i != 0 && (i+1)%k == 0)
		{
			++i;
			continue;
		}
		printf("%.4lf ", a(i));
		++i;
	}
	printf("\n");
}