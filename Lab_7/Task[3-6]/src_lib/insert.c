#include <head.h>

char *insert(const char *src, const char *str, int index)
{
	int i = 0;
	int j = 0;
	char *newstr = (char *)malloc(sizeof(src) + sizeof(str) - 1);
	if (index > strlen(newstr))
	{
		return "error";
	}
	while (i < index)
	{
		*(newstr + i) = *(src + i);
		++i;
	}
	i--;
	while (*(str + j))
	{
		*(newstr + i) = *(str + j);
		++i;
		++j;
	}
	while (*(src + i - j))
	{
		*(newstr + i) = *(src + i - j);
		++i;
	}
	*(newstr + i) = '\0';
	return newstr;
}