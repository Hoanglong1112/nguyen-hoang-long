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

void bai3_1_5(void)
{
	int a = 0, b = 0, k = 0;
	printf("Nhap a, b, k: ");
	scanf("%d %d %d", &a, &b, &k);
	printf("Cac so trong khoang tu a - b la: \n");
	for(int i = a; i <= b; i += k)
	{
		printf("%d ", i);
	}
}

void bai3_2_1(void)
{
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int temp = n;
	int count = 0;
	if (n == 0)
	{
		printf("So %d co 1 chu so \n", temp);
		return;
	}
	else if(n < 0)
	{
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	printf("So %d co %d chu so \n", temp, count);
}

void bai3_2_2(void)
{
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int tong = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			tong = tong + i;
		}
	}
	printf("Ket qua tong cac so le = %d \n", tong);
}

void bai3_2_3(void)
{
	int n = 0, digit = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int max = 0;
	while (n > 0)
	{
		digit = n % 10;
		printf("digit = %d\n", digit);
		if (digit > max)
		{
			max = digit;
		}
		n = n / 10;
		printf("n = %d\n", n);
	}
	printf("Chu so lon nhat la %d\n", max);
}

void bai3_2_4(void)
{
	int n = 0, digit = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int max = 0;
	int rev = 0;
	while (n > 0)
	{
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	printf("So dao nguoc la: %d\n", rev);
}

void bai3_2_5(void)
{
	int n = 0, digit = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int temp = n;
	int rev = 0;
	while (n > 0)
	{
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	printf("So dao nguoc la: %d\n", rev);
	if (rev == temp)
	{
		printf("Palindrome \n");
	}
	else
	{
		printf("No Palindrome");
	}
}

void bai3_3_1(void)
{
	int a = 0, b = 0;
	printf("Nhap a, b: ");
	scanf("%d %d", &a, &b);
	int r = 0;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("Uoc chung lon nhat la: %d\n", a);
}

void bai3_3_2(void)
{
	int a = 0, b = 0, x = 0, y = 0;
	printf("Nhap a, b: ");
	scanf("%d %d", &a, &b);
	x = a;
	y = b;
	int r = 0;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	int bcln = (x * y) / a;
	printf("Boi chung lon nhat la: %d\n", bcln);
}