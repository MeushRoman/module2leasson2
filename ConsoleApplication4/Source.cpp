#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Rus");

	const float e = 2.7;

	int n = 1;
	int res = 0;

	do
	{
		printf("Введите номер задания = ");
		res = scanf("%d", &n);

		if (n == 3) {
			int n = 0, m = 60;

			printf("3.	С начала суток прошло N секунд (N — целое). Найти количество полных минут, прошедших с начала суток.\n");

			printf("Кол-во секунд = ");
			scanf("%d", &n);

			printf("Количество полных минут = %d\n", n / 60);
		}
		else if (n == 4) {
			printf("4.	Даны два неотрицательных числа a и b. Найти их среднее геометрическое\n");

			float a, b;

			printf("a = ");
			scanf("%f", &a);

			printf("b = ");
			printf("%f", &b);

			printf("Среднее геометрическое a и b = %f\n", abs(sqrt(a*b)));
		}
		else if (n == 5)
		{
			printf("5.	Задание: составить структурную схему алгоритма и проект программы вычисления функции, один параметр ввести с клавиатуры, а другой задать как константу, все вычисляемые значения вывести на экран\n");

			int f = 0;

			printf("Введите номер подзадания = ");
			scanf("%d", &f);

			if (f == 1) {

				float x = 3.5, b = 0.4, y = 0, a;

				printf(" y = %f\n", (float)pow(e, 2 * x) + 9.7);


				a = log10(x);

				printf("c = %f\n", (float)pow(a, 2) + sqrt(b*x));

			}
			else if (f == 2) {

				float x = 1.3, k = 4, a, y, b;

				a = log(abs(x));
				b = pow(e, 2 * x) + a*x;

				printf("y = %f\n", (float)x*pow(a, 3) + pow(b, 3));
			}
			else if (f == 3) {
				float x = 2.1, p = 1, a, b;

				a = pow(e, sqrt(abs(x)));
				b = (sin(pow(x, 2))) + pow(x, 3);

				printf("y = %f\n", (float)pow(a, 3) / pow(b, 2));
			}
			else if (f == 4) {
				int x = 2.7, t = -6, a, b, y;

				a = log10(x);
				b = sqrt(pow(x, 2) + pow(t, 2));

				printf("y = %f\n", (float)pow(abs(a - b*x), 0.2));
			}
			else if (f == 5) {
				float t = 4.1, p = 3, x, k;

				k = sqrt(p*t);
				x = p* pow(t, 2) + sqrt(k);

				printf("y = %f\n", (float)pow(tan(pow(x, 2)), 3) + k*t);

			}
			else if (f == 6) {
				float x = 1.1, m = 2, a, b;

				a = sqrt(abs(x));
				b = pow(x, 4) + pow(m, 2);
				printf("y = %d\n", pow(sin(a + pow(tan(b), 2)), 2));
			}

		}
		else if (n == 6) {
			printf("6.	Задание: составить структурную схему алгоритма и проект программы, исходные данные ввести с клавиатуры, результат вывести на экран.\n");
			int n = 0;

			printf("Введите номер подкатегории = ");
			scanf("%d", &n);

			if (n == 1) {
				int t;
				printf("1.	Тело движется по закону S =t3 – 3t2 + 2. Вычислить скорость тела в момент времени t. Значение t ввести с клавиатуры (Функция скорости есть производная от функции расстояния по времени).\n");

				printf("t = ");
				scanf("%d", &t);

				printf("Скорость = %f\n", (float)pow(t, 3) - 3 * pow(t, 2) + 2);
			}
			else if (n == 2) {
				printf("2.	Найти корни квадратного уравнения a·x2 + b·x + c = 0, введя с экрана коэффициенты a, b, c (коэффициент a не равен 0), для которых дискриминант положителен.\n");

				int a, b, c, x1, x2;
				int d;
			start:
				printf("a = ");
				scanf("%d", &a);

				if (a == 0) {
					goto start;
				}
				
					printf("b = ");
					scanf("$d", &b);

					printf("c = ");
					scanf("$d", &c);
					if (d < 0)
					{
						goto start;
					}
					else {
						d = pow(b, 2) - 4 * a*c;
					}
					printf("x1 = %f\n", (float)(-b - sqrt(d)) / (2 * a));
					printf("x2 = %f\n", (float)(-b + sqrt(d)) / (2 * a));
			}
			else if (n == 3) {
				printf("3.	Вычислить корень уравнения 2x/a +b-12=0 при различных значениях параметров a, b. Значения a, b ввести с экрана.\n");

				int a, b, x;

				printf("a = ");
				scanf("%d, &a");

				printf("b = ");
				scanf("%d, &c");

				printf("x = %f\n", (float)(-b + 12 * a) / 2);
			}
			else if (n == 4) {
				printf("4.	Вычислить рентабельность работы предприятия за месяц по формуле рент = прибыль/себестоимость100%, если себестоимость продукции в текущем месяце уменьшилась по сравнению с прошлым на 5 %. Значение прибыли и себестоимости за прошлый месяц ввести с экрана\n");

				int ren, p, ss;

				printf("Прибыль за прошлый месяц = ");
				scanf("%d", &p);
				printf("Себестоимость = ");
				scanf("%d", &ss);
				
				printf("Рентабельность = %.2f", (float)p/ss*100);
			}
			else if (n == 5) {
				printf("5.	Идет k-я секунда суток. Определить, сколько целых часов (Н) и целых минут (М) прошло с начала суток. Вывести на экран фразу: «Эточасовминут». Вместо многоточий поставить вычисленные значения Н и М.\n");

				int k, h, m;

				printf("Секунда суток = ");
				scanf("%d", &k);
				
				h = k / 3600;
				m = k / 60;				

				printf("Это %d:%d\n", h,m);

			}

		}

	} while (res == 1);
}