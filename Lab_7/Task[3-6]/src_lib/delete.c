#include <head.h>
char *delete(char *str, const char *substr)
{
	int i = 0, j = 0;
	char *s = find(str, substr);
	if (s == NULL)
	{
		return "error: not found";
	}
	while (*(s + i) && i < strlen(substr))
	{
		*(s + i) = '\0';
		i++;
	}
	while (*(s + j + i))
	{
		*(s + j) = *(s + j + i);
		*(s + j + i) = '\0';
		j++;
	}
	return str;
}