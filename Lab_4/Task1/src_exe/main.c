#include <stdio.h>
void main(void)
{
	const double x = 9;
	double result;
	f(&x, &result);
	printf("x=%.4lf\nf(x)=%.4lf\nx=", x, result);
	scanf_s("%lf", &x);
	f(&x, &result);
	printf("f(x)=%.4lf\n", result);
	system("pause");
}