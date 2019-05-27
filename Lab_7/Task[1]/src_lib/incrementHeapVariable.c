#include <head.h> 

void incrementHeapVariable(void)
{
	int *x = (int *)malloc(sizeof(int));
	scanf_s("%d", x);
	printf("%x %d ", x, *x);
	*x+=1;
	printf("%x %d\n", x, *x);
	free(x);
}