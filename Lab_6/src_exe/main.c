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
	strcpy(Z2.firstName, "����");
	strcpy(Z2.lastName, "������");
	Z2.semI[0].sem = 1;
	Z2.semI[0].year = 2017;
	strcpy(Z2.semI[0].theor[0].name, "�������� � �������������");
	strcpy(Z2.semI[0].theor[0].teach, "��������");
	strcpy(Z2.semI[0].theor[0].time, "22.12.17");
	Z2.semI[0].theor[0].str.type = notDiff;
	Z2.semI[0].theor[0].str.value.acc = 1;


}
void main(void)
{
	setlocale(LC_ALL, "Rus");

	
}