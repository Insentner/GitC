#include <head.h>

void sortStackArray()
{
	int n;
	int arr[5];
	n = sizeof(arr) / sizeof(int);
	printf("%d\n",n);
	readArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
	printf("\n");
}