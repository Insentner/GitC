#include <head.h>

void delete(char *str, const char *substr)
{
	int i = 0;
	str = find(str, substr);
	while (*(str + strlen(substr) + i) != '\0')
	{
		*(str+i) =*(str + strlen(substr) + i);
		*(str + strlen(substr) + i) = '\0';
		i++;
	}
}