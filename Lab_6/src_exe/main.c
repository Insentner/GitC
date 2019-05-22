#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <head.h>

struct ZACH *write1(void)
{
	static struct ZACH Z1 =
	{
		"Вася",
		"Машина",
		{
			{ 2017, //страница зачетки
			  1,
				{ //зачеты
					//{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "Введение в специальность", "Гончаров", "22.12.17", { notDiff, {.acc = 1} }  },
					{ "История России", "Гусев", "27.12.17", { notDiff, {.acc = 1} }  },
					{ "Русский язык и культура речи", "Терешкова", "09.01.18", { notDiff, {.acc = 1} }  },
					{ "Английский язык", "Толкачева", "10.01.18", { notDiff, {.acc = 1} }  },
					{ "Информатика", "Загвоздкина", "11.01.18", { notDiff, {.acc = 1} }  }
				},
				{ //экзамены
					//{ "", "", "..", { Diff, {.mark =  } }  },
					{ "Высшая математика", "Лакерник", "19.01.18", { Diff, {.mark = Good } }  },
					{ "Аналитическая геометрия и линейная алгебра", "Пискарев", "23.01.18", { Diff, {.mark = Excel} }  },
					{ "Философия", "Плужникова", "30.01.18", { Diff, {.mark = Excel} }  }
				}
			},
			{ 2018,
			  2,
				{
					{ "ЭИиИ", "Кузовков", "31.05.18", { notDiff, {.acc = 1} }  },
					{ "Физика", "Тренин", "01.06.18", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "", "", "..", { notDiff, {.acc = 1} }  }
				},
				{
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Excel} }  },
					{ "", "", "..", { Diff, {.mark = Good} }  }
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
	return &Z1;
}
struct ZACH *write2(void)
{
	static struct ZACH Z2;
	strcpy(Z2.firstName, "Вася");
	strcpy(Z2.lastName, "Машина");

	//1й семестр
	Z2.semI[0].sem = 1;
	Z2.semI[0].year = 2017;

	strcpy(Z2.semI[0].theor[0].name, "Введение в специальность");
	strcpy(Z2.semI[0].theor[0].teach, "Гончаров");
	strcpy(Z2.semI[0].theor[0].time, "22.12.17");
	Z2.semI[0].theor[0].str.type = notDiff;
	Z2.semI[0].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[1].name, "История России");
	strcpy(Z2.semI[0].theor[1].teach, "");
	strcpy(Z2.semI[0].theor[1].time, "");
	Z2.semI[0].theor[1].str.type = notDiff;
	Z2.semI[0].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[2].name, "");
	strcpy(Z2.semI[0].theor[2].teach, "");
	strcpy(Z2.semI[0].theor[2].time, "");
	Z2.semI[0].theor[2].str.type = notDiff;
	Z2.semI[0].theor[2].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[3].name, "");
	strcpy(Z2.semI[0].theor[3].teach, "");
	strcpy(Z2.semI[0].theor[3].time, "");
	Z2.semI[0].theor[3].str.type = notDiff;
	Z2.semI[0].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[4].name, "");
	strcpy(Z2.semI[0].theor[4].teach, "");
	strcpy(Z2.semI[0].theor[4].time, "");
	Z2.semI[0].theor[4].str.type = notDiff;
	Z2.semI[0].theor[4].str.value.acc = 1;


	strcpy(Z2.semI[0].prack[0].name, "");
	strcpy(Z2.semI[0].prack[0].teach, "");
	strcpy(Z2.semI[0].prack[0].time, "");
	Z2.semI[0].prack[0].str.type = Diff;
	Z2.semI[0].prack[0].str.value.mark = Good;

	strcpy(Z2.semI[0].prack[1].name, "");
	strcpy(Z2.semI[0].prack[1].teach, "");
	strcpy(Z2.semI[0].prack[1].time, "");
	Z2.semI[0].prack[1].str.type = Diff;
	Z2.semI[0].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[0].prack[2].name, "");
	strcpy(Z2.semI[0].prack[2].teach, "");
	strcpy(Z2.semI[0].prack[2].time, "");
	Z2.semI[0].prack[2].str.type = Diff;
	Z2.semI[0].prack[2].str.value.mark = Excel;

	//2й семестр
	Z2.semI[1].sem = 2;
	Z2.semI[1].year = 2018;

	strcpy(Z2.semI[1].theor[0].name, "");
	strcpy(Z2.semI[1].theor[0].teach, "");
	strcpy(Z2.semI[1].theor[0].time, "");
	Z2.semI[1].theor[0].str.type = notDiff;
	Z2.semI[1].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[1].name, "История России");
	strcpy(Z2.semI[1].theor[1].teach, "");
	strcpy(Z2.semI[1].theor[1].time, "");
	Z2.semI[1].theor[1].str.type = notDiff;
	Z2.semI[1].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[2].name, "");
	strcpy(Z2.semI[1].theor[2].teach, "");
	strcpy(Z2.semI[1].theor[2].time, "");
	Z2.semI[1].theor[2].str.type = notDiff;
	Z2.semI[1].theor[2].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[3].name, "");
	strcpy(Z2.semI[1].theor[3].teach, "");
	strcpy(Z2.semI[1].theor[3].time, "");
	Z2.semI[1].theor[3].str.type = notDiff;
	Z2.semI[1].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[4].name, "");
	strcpy(Z2.semI[1].theor[4].teach, "");
	strcpy(Z2.semI[1].theor[4].time, "");
	Z2.semI[1].theor[4].str.type = notDiff;
	Z2.semI[1].theor[4].str.value.acc = 1;


	strcpy(Z2.semI[1].prack[0].name, "");
	strcpy(Z2.semI[1].prack[0].teach, "");
	strcpy(Z2.semI[1].prack[0].time, "");
	Z2.semI[1].prack[0].str.type = Diff;
	Z2.semI[1].prack[0].str.value.mark = Excel;

	strcpy(Z2.semI[1].prack[1].name, "");
	strcpy(Z2.semI[1].prack[1].teach, "");
	strcpy(Z2.semI[1].prack[1].time, "");
	Z2.semI[1].prack[1].str.type = Diff;
	Z2.semI[1].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[1].prack[2].name, "");
	strcpy(Z2.semI[1].prack[2].teach, "");
	strcpy(Z2.semI[1].prack[2].time, "");
	Z2.semI[1].prack[2].str.type = Diff;
	Z2.semI[1].prack[2].str.value.mark = Excel;

	strcpy(Z2.semI[1].prack[3].name, "");
	strcpy(Z2.semI[1].prack[3].teach, "");
	strcpy(Z2.semI[1].prack[3].time, "");
	Z2.semI[1].prack[3].str.type = Diff;
	Z2.semI[1].prack[3].str.value.mark = Good;

	//3й семестр
	Z2.semI[2].sem = 3;
	Z2.semI[2].year = 2018;

	strcpy(Z2.semI[2].theor[0].name, "");
	strcpy(Z2.semI[2].theor[0].teach, "");
	strcpy(Z2.semI[2].theor[0].time, "");
	Z2.semI[2].theor[0].str.type = notDiff;
	Z2.semI[2].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[1].name, "");
	strcpy(Z2.semI[2].theor[1].teach, "");
	strcpy(Z2.semI[2].theor[1].time, "");
	Z2.semI[2].theor[1].str.type = notDiff;
	Z2.semI[2].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[2].name, "");
	strcpy(Z2.semI[2].theor[2].teach, "");
	strcpy(Z2.semI[2].theor[2].time, "");
	Z2.semI[2].theor[2].str.type = notDiff;
	Z2.semI[2].theor[2].str.value.mark = Good;

	strcpy(Z2.semI[2].theor[3].name, "");
	strcpy(Z2.semI[2].theor[3].teach, "");
	strcpy(Z2.semI[2].theor[3].time, "");
	Z2.semI[2].theor[3].str.type = notDiff;
	Z2.semI[2].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[4].name, "");
	strcpy(Z2.semI[2].theor[4].teach, "");
	strcpy(Z2.semI[2].theor[4].time, "");
	Z2.semI[2].theor[4].str.type = notDiff;
	Z2.semI[2].theor[4].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[5].name, "");
	strcpy(Z2.semI[2].theor[5].teach, "");
	strcpy(Z2.semI[2].theor[5].time, "");
	Z2.semI[2].theor[5].str.type = notDiff;
	Z2.semI[2].theor[5].str.value.acc = 1;


	strcpy(Z2.semI[2].prack[0].name, "");
	strcpy(Z2.semI[2].prack[0].teach, "");
	strcpy(Z2.semI[2].prack[0].time, "");
	Z2.semI[2].prack[0].str.type = Diff;
	Z2.semI[2].prack[0].str.value.mark = Excel;

	strcpy(Z2.semI[2].prack[1].name, "");
	strcpy(Z2.semI[2].prack[1].teach, "");
	strcpy(Z2.semI[2].prack[1].time, "");
	Z2.semI[2].prack[1].str.type = Diff;
	Z2.semI[2].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[2].prack[2].name, "");
	strcpy(Z2.semI[2].prack[2].teach, "");
	strcpy(Z2.semI[2].prack[2].time, "");
	Z2.semI[2].prack[2].str.type = Diff;
	Z2.semI[2].prack[2].str.value.mark = Excel;

	strcpy(Z2.semI[2].prack[3].name, "");
	strcpy(Z2.semI[2].prack[3].teach, "");
	strcpy(Z2.semI[2].prack[3].time, "");
	Z2.semI[2].prack[3].str.type = Diff;
	Z2.semI[2].prack[3].str.value.mark = Excel;

	//4й семестр
	Z2.semI[3].sem = 4;
	Z2.semI[3].year = 2019;

	strcpy(Z2.semI[3].theor[0].name, "");
	strcpy(Z2.semI[3].theor[0].teach, "");
	strcpy(Z2.semI[3].theor[0].time, "");
	Z2.semI[3].theor[0].str.type = notDiff;
	Z2.semI[3].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[1].name, "");
	strcpy(Z2.semI[3].theor[1].teach, "");
	strcpy(Z2.semI[3].theor[1].time, "");
	Z2.semI[3].theor[1].str.type = notDiff;
	Z2.semI[3].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[2].name, "");
	strcpy(Z2.semI[3].theor[2].teach, "");
	strcpy(Z2.semI[3].theor[2].time, "");
	Z2.semI[3].theor[2].str.type = notDiff;
	Z2.semI[3].theor[2].str.value.mark = Excel;

	strcpy(Z2.semI[3].theor[3].name, "");
	strcpy(Z2.semI[3].theor[3].teach, "");
	strcpy(Z2.semI[3].theor[3].time, "");
	Z2.semI[3].theor[3].str.type = notDiff;
	Z2.semI[3].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[4].name, "");
	strcpy(Z2.semI[3].theor[4].teach, "");
	strcpy(Z2.semI[3].theor[4].time, "");
	Z2.semI[3].theor[4].str.type = notDiff;
	Z2.semI[3].theor[4].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "");
	strcpy(Z2.semI[3].theor[5].teach, "");
	strcpy(Z2.semI[3].theor[5].time, "");
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "");
	strcpy(Z2.semI[3].theor[5].teach, "");
	strcpy(Z2.semI[3].theor[5].time, "");
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "");
	strcpy(Z2.semI[3].theor[5].teach, "");
	strcpy(Z2.semI[3].theor[5].time, "");
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;


	strcpy(Z2.semI[3].prack[0].name, "");
	strcpy(Z2.semI[3].prack[0].teach, "");
	strcpy(Z2.semI[3].prack[0].time, "");
	Z2.semI[3].prack[0].str.type = Diff;
	Z2.semI[3].prack[0].str.value.mark = Excel;

	strcpy(Z2.semI[3].prack[1].name, "");
	strcpy(Z2.semI[3].prack[1].teach, "");
	strcpy(Z2.semI[3].prack[1].time, "");
	Z2.semI[3].prack[1].str.type = Diff;
	Z2.semI[3].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[3].prack[2].name, "");
	strcpy(Z2.semI[3].prack[2].teach, "");
	strcpy(Z2.semI[3].prack[2].time, "");
	Z2.semI[3].prack[2].str.type = Diff;
	Z2.semI[3].prack[2].str.value.mark = Excel;

	strcpy(Z2.semI[3].prack[3].name, "");
	strcpy(Z2.semI[3].prack[3].teach, "");
	strcpy(Z2.semI[3].prack[3].time, "");
	Z2.semI[3].prack[3].str.type = Diff;
	Z2.semI[3].prack[3].str.value.mark = Excel;

	return &Z2;
}

void main(void)
{
	setlocale(LC_ALL, "Rus");
	struct ZACH *Z1 = write1();
	struct ZACH *Z2 = write2();
	do
	{
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("%d %d\n", Z1->semI[0].sem, Z2->semI[0].sem);
			break;
		case '2':
			system("cls");

			break;
		case '3':
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}