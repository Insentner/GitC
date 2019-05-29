#include <head.h>

char *strcpy(const char *src)
{
	int i = 0;
	char *newsrc = (char *)malloc(sizeof(src));
	while (*(src + i))
	{
		*(newsrc + i) = *(src + i);
		i++;
	}
	*(newsrc + i) = '\0';
	return newsrc;
}