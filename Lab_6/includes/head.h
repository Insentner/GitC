enum mark
{
	Bad = 2, Norm, Good, Excel
};

union markVal
{
	_Bool acc;
	enum mark mark;
};

enum markType { Diff, notDiff };

struct markS
{
	enum markType type;
	union markVal value;
};

struct subInf
{
	char name[60];
	char teach[60];
	char time[9];//день месяц год типа структура даты
	struct markS str;
};

struct semInf
{
	int year;
	int sem;
	struct subInf theor[10];
	struct subInf prack[10];
};

struct ZACH
{
	char firstName[60];
	char lastName[60];
	char dadName[60];
	char number[15];
	struct semInf semI[4];
};