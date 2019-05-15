#include <head.h>

void delete(char *str, const char *substr)
{
	int i = 0;
	str = find(str, substr);
	while (*(str + i) != '\0' && i<strlen(substr))
	{
		*(str+i) ='/0';
		i++;
	}
}