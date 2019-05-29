#include <head.h>

void main(void)
{
	char *str = (char *)malloc(sizeof("1234567890"));
	char *substr = (char *)malloc(sizeof("456"));
	substr = "456";
	str = "1234567890";
	do
	{
		printf("press to select:\n1 - delete\n2 - strcpy\n3 - strcat\n4 - insert\n5 - exit\n");
		switch (_getch())
		{
		case'1':
		    system("cls");
			printf("selected delete.\n%s\n", delete(str, substr));
			break;
		case'2':
			system("cls");
			printf("selected strcpy.\n%s\n", strcpy(str));
			break;
		case'3':
			system("cls");
			printf("selected strcat.\n%s\n", strcat(str, substr));
			break;
		case'4':
			system("cls");
			printf("selected insert.\n%s\n", insert(str, substr, 4));
			break;
		case'5':
			free(substr);
			free(str);
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}