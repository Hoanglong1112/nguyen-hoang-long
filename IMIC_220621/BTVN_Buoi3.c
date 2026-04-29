#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

void bai3_1_1(void)
{
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Tat ca cac so chan trong khoang tu 1 den %d la: \n", n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
}

void bai3_1_2(void)
{
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Bang cuu chuong %d la: \n", n);
	for (int i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
}

void bai3_1_3(void)
{
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + (i * i);
	}
	printf("Ket qua = %d \n", s);
}

void bai3_1_4(void)
{
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + 1/ (float)i;
	}
	printf("Ket qua = %.2f \n", s);
}