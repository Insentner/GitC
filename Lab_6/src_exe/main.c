#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <head.h>

void write1(void)
{
	struct ZACH Z1 =
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