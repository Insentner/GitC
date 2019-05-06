#include <head.h>

void sortStackArray()
{
	int n;
	int arr[5];
	n = sizeof(arr) / sizeof(int);
	printf("I\n");//check
	readArray(arr, n);
	printf("II\n");
	sort(arr, n);
	printf("III\n");
	writeArray(arr, n);
}