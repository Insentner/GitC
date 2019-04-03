#include <head.h>

void print(int n, int k)
{
	for (int i = 0; i < n; ++i)
	{
		if (i != 0 && (i+1)%k == 0)
		{
			continue;
		}
		printf("%.4lf ", a(i));
	}
	printf("\n");
}