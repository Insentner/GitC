#include <stdio.h>

void main(void)
{
	do
	{
		printf("press to select:\n1 - demonstration task2\n2 - exit");
		switch (_getch())
		{
		case'1':
			system("cls");
			sortStackArray();
			break;
		case'2':
			exit(0);
		}
		system("pause");
		system("cls");
	} while(1);
}