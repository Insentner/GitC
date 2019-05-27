//#include <head.h>

//int strlen(const char *str)
//{
//	return (*str) ? strlen(++str) + 1 : 0;
//}
int strlen(const char *str) 
{
	register const char *s = str; 
	while (*str++); 
	return str - s - 1; 
}