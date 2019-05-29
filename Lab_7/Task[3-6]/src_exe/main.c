#include <head.h>

void main(void)
{
	char *str = (char *)malloc(sizeof("Zaloopa") + 1);
	char *substr = (char *)malloc(sizeof("loo") + 1);
	str = "Zaloopa";
	substr = "loo";
	do
	{
		printf("press to select:\n1 - delete\n2 - strcpy\n3 - strcat\n4 - insert\n5 - exit\n");
		switch (_getch())
		{
		case'1':
		    system("cls");
			printf("selected delete.\n%s", delete(str, substr));
			break;
		case'2':
			system("cls");

			break;
		case'3':
			system("cls");

			break;
		case'4':
			system("cls");

			break;
		case'5':
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}