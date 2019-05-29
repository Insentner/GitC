#include <head.h>
//everything is bad
char *delete(char *str, const char *substr)
{
	int i = 0, j = 0;
	const char *s = find(str, substr);
	char *st = (char *)calloc(strlen(str), sizeof(char));
	while (i < sizeof(st)/sizeof(char)  && i < s - str)
	{
		*(st + i) = *(str + i);
		i++;
	}
	while (*(str + i + j + strlen(substr)) != '\0' /*&& i < strlen(substr)*/)
	{
		*(st + j + i) = *(str + i + j + strlen(substr));
		j++;
	}
	*str = "";
	*str = (char **)realloc(*str, strlen(st) * sizeof(char)+1);

	return str;
}