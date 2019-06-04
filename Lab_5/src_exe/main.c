#include <head.h>

void main(void)
{
	const char str[]="1234567890";
	const char substr[]="456";
	char dest[] = "";
	int len = 5;

	do
	{
		printf("press to select:\n1 - strlen\n2 - find\n3 - delete\n4 - strcpy\n5 - strcat\n6 - insert\n7 - exit\n");
		switch (_getch())
		{
		case'1':
		    system("cls");
			printf("lenght str is %d\n", strlen(str));
			break;
		case'2':
			system("cls");
			printf("position of substr in str %d %x (0 - not)\n", find(str,substr), find(str, substr));
			break;
		case'3':
			system("cls");
			delete(str, substr);
			printf("after delete: %s %s\n", str, substr);
			break;
		case'4':
			system("cls");
			strcpy(dest, len, str);
			printf("dest = %s\n", dest);
			break;
		case'5':
			system("cls");
			strcat(dest, 11, str, substr);
			printf("dest = %s\n", dest);
			break;
		case '6':
			system("cls");
			if (insert(str, substr, 4, dest, 13))
			{
				printf("dest = %s\n", dest);
			}
			else
			{
				printf("ERROR: len < index or size of dest < len\n");
			}
			break;
		case'7':
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}