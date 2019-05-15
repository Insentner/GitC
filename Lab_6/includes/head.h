struct markS
{
	enum markType type;
	union markVal value;
};


enum mark
{
	NotNorm=2,Norm,Good,Excel
};

enum markType {Diff,notDiff};

union markVal
{
	_Bool acc;
	enum mark mark;
};
struct ZACH
{
	char firstName[60];
	char lastName[60];
	struct semInf 
};

struct semInf
{
	int year;
	short sem;
	struct subInf theor[10];
	struct subInf prack[10];
};

struct subInf
{
	char name[60];
	char teach[60];
	long long time;//день месяц год типа структура даты
	struct markS str;
};