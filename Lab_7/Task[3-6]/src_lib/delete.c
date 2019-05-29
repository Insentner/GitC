#include <head.h>
//everything is bad
char *delete(char *str, const char *substr)
{
	int i = 0, j = 0;
	char *s = find(str, substr);
	if (s == NULL)
	{
		return "error";
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
	//*s = (char *)realloc(str, strlen(str)*sizeof(char)); //i don't know
	//str = s;
	return str;
}