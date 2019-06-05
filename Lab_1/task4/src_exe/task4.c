#include <stdio.h>
#include <math.h>

double x=7.5;
double result;
void f(void);

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

void f(void)
{
	result = 2 * pow(cos(x), 2) - 1;
}