#include <head.h>

void sortHeapArray()
{
	int n;
	int *arr;
	scanf_s("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
	printf("%d\n",n);
	readArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
	free(arr);
}