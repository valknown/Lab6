#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void task1();
void task2();

double f1(double x) {
	return (x <= 3) ? (pow(x, 3) / (pow(x, 2) + 8)) : (-3 * x + 9);
}
void main() {
	setlocale(LC_ALL, "RUS");
	task1();
	task2();
}

void task1() {
	int yeas;
	printf("введите год: \n");
	scanf("%d", &yeas);
	if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)) {
		printf("год %d высокосный\n", yeas);
	}
	else {
		printf("год %d не високосный\n", yeas);
	}
}

void task2() {
	double x;
	printf("введите x: \n");
	scanf("%lf", &x);
	printf("ответ: %lf", f1(x));
}