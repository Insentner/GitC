#include <head.h>
//everything is bad
char *delete(char *str, const char *substr)
{
	int i = 0, j = 0;
	const char *s = find(str, substr);
	char *st = (char *)malloc(sizeof(str) + 1);
	while (*(s + i) != '\0' && i < strlen(substr))
	{
		i++;
	}
	while (*(str + i + 1 + j) != '\0')
	{
		*(st + i + j) = *(str );
		j++;
	}
	str = (char *)realloc(str, sizeof(s) - i+1);

	return &str;
}