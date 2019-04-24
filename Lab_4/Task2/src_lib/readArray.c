#include <head.h>

void readArray(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", *(arr + i));
	}
}