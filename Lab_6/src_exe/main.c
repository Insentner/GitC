#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <head.h>

void write1(void)
{
	struct ZACH Z1 =
	{
		"����",
		"������",
		{
			{ 2017, //�������� �������
			  1,
				{ //������
					//{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "�������� � �������������", "��������", "22.12.17", { notDiff, {.acc = 1} }  },
					{ "������� ������", "�����", "27.12.17", { notDiff, {.acc = 1} }  },
					{ "������� ���� � �������� ����", "���������", "09.01.18", { notDiff, {.acc = 1} }  },
					{ "���������� ����", "���������", "10.01.18", { notDiff, {.acc = 1} }  },
					{ "�����������", "�����������", "11.01.18", { notDiff, {.acc = 1} }  }
				},
				{ //��������
					//{ "", "", "..", { Diff, {.mark =  } }  },
					{ "������ ����������", "��������", "19.01.18", { Diff, {.mark = Good } }  },
					{ "������������� ��������� � �������� �������", "��������", "23.01.18", { Diff, {.mark = Excel} }  },
					{ "���������", "����������", "30.01.18", { Diff, {.mark = Excel} }  }
				}
			},
			{ 2018,
			  2,
				{
					{ "����", "��������", "31.05.18", { notDiff, {.acc = 1} }  },
					{ "������", "������", "01.06.18", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  }
				},
				{
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  }
				}
			},
			{ 2018,
			  3,
				{
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.mark = Good} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  }
				},
				{
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  }
				}
			},
			{ 2019,
			  4,
				{
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.mark = Excel} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  }
				},
				{
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  }
				}
			},
		}
	 };
}
void write2(void)
{
	struct ZACH Z2;
	strcpy(Z2.firstName, "");
	strcpy(Z2.lastName, "");
	struct semInf sem1;
	sem1.year = 2017;
	sem1.sem = 1;
	struct subInf sub1;
	strcpy(sub1.name, "");

}
void main(void)
{
	setlocale(LC_ALL, "Rus");

	
}