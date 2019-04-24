//2. Сортировка вставками
#include <head.h>

void sort(int *arr, int n)
{
	int element, location;
    for (int i = 1; i < n; ++i)
    {
		element = *(arr + i);
        location = i - 1;
        while((location >= 0) && (*(arr + location) > element))
        {
			*(arr + location + 1) = *(arr + location);
            location = location - 1;
        }
		*(arr + location + 1) = element;
    }
}