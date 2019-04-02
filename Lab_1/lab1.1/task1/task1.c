#include <stdio.h>
#include <math.h>

void main() 
{
	double x = 9.23;
	double y;
	y = 2 * pow(cos(x), 2) - 1;
	printf("x=%.4lf\n", x);
	printf("f(x)= %.4lf\nx=", y);
	scanf_s("%lf", &x);
	y = 2 * pow(cos(x), 2) - 1;
	printf("f(x)= %.4lf\n", y);
	system("pause");
	return 0;
}
