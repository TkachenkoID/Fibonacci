/*
*@file Практика.cpp
*@author Ткаченко И.Д., гр. 515в
*@date 28.06.2021
*@brief Практика
*
*Вариант задания №2
*/
#include "pch.h"
#include <stdio.h> 
#include <locale.h>
#include <windows.h>
#pragma warning(disable:4996)

void fibonacci(int N);
int fib(int N);
int ints();

int main()
{
	setlocale(LC_ALL, "ru");
	int N;
	printf("Введите номер крайнего числа Фибоначчи: ");
	N = ints();
	fib(N);
	return 0;
}


int fib(int N) {
	if (N <= 0)
	{
		printf("Число (0): 0\n");
	}
	else if (N <= 1)
	{
		printf("Число (0): 0\n""Число (1): 1\n");
	}
	else if (N <= 2)
	{
		printf("Число (0): 0\n""Число (1): 1\n""Число (2): 1\n");
	}
	else
	{
		fibonacci(N);
		return 0;
	}
}

void fibonacci(int N)
{
	long double a = 1, b = 1, c;
	printf("Число (0): 0\n"
		"Число (1): 1\n"
		"Число (2): 1\n");
	for (int i = 3; i <= N; i++)
	{
		c = a + b;
		a = b; b = c;
		if (i <= 80)
		{
			printf("Число (%d): %.0lf\n", i, b);
		}
		else
		{
			printf("Число (%d): %e\n", i, b);
		}
	}
}

int ints()
{
	for (;;)
	{
		char buf[10];
		char txt0[10];
		int j = 0;
		scanf("%s", buf);
		if (!strcmp(buf, "0")) {
			return 0;
		}
		else {
			for (int i = 0; i < sizeof(buf); ++i) {
				if (buf[i] >= 48 && buf[i] <= 57)
				{
					txt0[j] = buf[i];
					j++;
				}
			}
			if (atoi(txt0) != 0)
			{
				return atoi(txt0);
			}
		}
	}
}