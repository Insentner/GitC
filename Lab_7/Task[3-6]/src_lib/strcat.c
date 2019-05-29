#include <head.h>

char *strcat(const char *first, const char *second)
{
	int i = 0;
	int j = 0;
	char *newstr = (char *)malloc(sizeof(first) + sizeof(second) - 1);
	while (i < strlen(first))
	{
		*(newstr + i) = *(first + i);
		++i;
	}
	while (j < strlen(second))
	{
		*(newstr + i) = *(second + j);
		++i;
		++j;
	}
	*(newstr + i) = '\0';
	return newstr;
}