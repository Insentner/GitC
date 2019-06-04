#include <head.h>
void main(void)
{
	static char* s = "1234567890";
	static char* su = "456";
	char* str = NULL;
	char* substr = NULL;
	char* cpy = NULL;
	char* cat = NULL;
	char* ins = NULL;
	free(ins);
	free(cat);
	free(cpy);
	free(substr);
	free(str);
	str = strcpy(s);
	substr = strcpy(su);
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
			cpy = strcpy(str);
			printf("selected strcpy.\n%s\n", cpy);
			free(cpy);
			break;
		case'3':
			system("cls");
			cat = strcat(str, substr);
			printf("selected strcat.\n%s\n", cat);
			free(cat);
			break;
		case'4':
			system("cls");
			ins = insert(str, substr, 4);
			printf("selected insert.\n%s\n", ins);
			free(ins);
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