#include <head.h>

double summ(int n);
double summ2(double eps);
void print(int n, int k);
int findFirstElement(double eps);
int findFirstNegativeElement(double eps);

int main(void)
{
	int n;
	int k;
	double eps;
	for (int i = 0;; ++i)
	{
		printf("press to select task:\n1 - for select task 1;\n2 - for select task 2;\n3 - for select task 3;\n4 - for select task 4;\n5 - for select task 5;\n6 - for exit.\n");
		switch (_getch())
		{
		case'1':
			system("cls");
			printf("Selected task1\nwrite n:\n");
			scanf_s("%d", &n);
			printf("sum of n elements: %.4lf\n", summ(n));
			break;
		case'2':
			system("cls");
			printf("Selected task2\nwrite eps:\n");
			scanf_s("%lf", &eps);
			printf("sum of elements larger eps: %.4lf\n", summ2(eps));
			break;
		case'3':
			system("cls");
			printf("Selected task3\nwrite n:\n");
			scanf_s("%d", &n);
			printf("write k:\n");
			scanf_s("%d", &k);
			printf("row of elements without k-elements:\n");
			print(n,k);
			break;
		case'4':
			system("cls");
			printf("Selected task4\nwrite eps:\n");
			scanf_s("%lf", &eps);
			printf("number of first element less eps: %d\n", findFirstElement(eps));
			break;
		case'5':
			system("cls");
			printf("Selected task5\nwrite eps:\n");
			scanf_s("%lf", &eps);
			printf("number of first negative element less eps: %d\n", findFirstNegativeElement(eps));
			break;
		case'6':
			exit(0);
		}
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}