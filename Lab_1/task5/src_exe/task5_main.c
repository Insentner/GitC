#include <stdio.h>

double f(double x);

void main()
{
	double x = 9.23;
	printf("x=%.4lf\n", x);
	printf("f(x)= %.4lf\nx=", f(x));
	scanf_s("%lf", &x);
	printf("f(x)= %.4lf\n", f(x));
	system("pause");
}