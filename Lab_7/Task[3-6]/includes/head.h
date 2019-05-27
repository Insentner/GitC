#include <stdio.h>

void strcat(char *dest, int len, const char *first, const char *second);
void strcpy(char *dest, int len, const char *src);
void delete(char *str, const char *substr);
char *find(const char *str, const char *substr);
int strlen(const char *str);
_Bool insert(const char *src, const char *str, int index, char *dest, int len);