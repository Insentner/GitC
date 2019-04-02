#include <stdio.h>

void f(void);
extern double x;
extern double result;

void main()
{
	f();
	printf("x=%.4lf\n", x);
	printf("f(x)= %.4lf\nx=", result);
	scanf_s("%lf", &x);
	f();
	printf("f(x)= %.4lf\n", result);
	system("pause");
}