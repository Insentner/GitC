#include <stdio.h>

_Bool isInArea(double x, double y);
double f(double x);

int main(void)
{
	double x, y;
	printf("switch 1 to start task1 or switch 2 to start task2\n");
	switch (_getch())
	{
	case'1':
		printf("write point 'x y' for check with task1\n");
		scanf_s("%lf %lf",&x,&y);
		if (isInArea(x, y))
		{
			printf("task1: this point is in area\n");
		}
		else
		{
			printf("task1: this point is not in area\n");
		}
		break;
	case'2':
		printf("write x for task2 calculating\n");
		scanf_s("%lf", &x);
		printf("result of task2 calculating: %.4lf\n", f(x));
		break;
	}
	system("pause");
	return 0;
}