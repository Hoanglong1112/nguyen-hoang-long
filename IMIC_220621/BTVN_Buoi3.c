#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"

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

void bai3_3_3(void)
{
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int sum = 0;
	if (n <= 0)
	{
		printf("%d khong phai so hoan hao \n");
		return;
	}
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		printf("%d la so hoan hao \n", n);
	}
	else
	{
		printf("%d khong phai so hoan hao \n", n);
	}
}

void bai3_3_4(void)
{
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int isPrime = 0;
	if (n < 2)
	{
		return;
	}
	printf("Cac so nguyen to la: \n");
	for (int i = 2;i <= n;i++)
	{
		isPrime = 1;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1)
		{
			printf("%d \n", i);
		}
	}
}

void bai3_3_5(void)
{
	int n = 0;
	int a = 1, b = 1, c = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (n == 1)
	{
		printf("%d ", a);
	}
	else if (n <= 0)
	{
		return;
	}
	else if (n >= 2)
	{
		printf("%d %d ", a, b);
	}
	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
		
	}
}

void bai3_3_6(void)
{
	int n = 0;
	float sum = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 0; i <= n - 1; i++)
	{
		int mau = 2 * i + 1;
		float term = 1.0 / mau;
		if (i % 2 == 0)
		{
			sum += term;
		}
		else
		{
			sum -= term;
		}
	}
	float pi = 4 * sum;
	printf("Ket qua = %.2f", pi);
}

void bai3_4_1(void)
{
	int w = 0, h = 0;
	printf("Nhap w va h: ");
	scanf("%d %d", &w, &h);
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			printf(".");
		}
		printf("\n");
	}
}

void bai3_4_2(void)
{
	int canh = 0;
	printf("canh = ");
	scanf("%d", &canh);
	for (int i = 0; i <= canh-1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf(".");
		}
		printf("\n");
	}
}

//void test(void)
//{
//	int canh = 0;
//	printf("canh = ");
//	int s = 0;
//	scanf("%d", &canh);
//	for (int i = 0; i < canh-1; i++)
//	{
//		printf(".");
//		printf("\n");
//		for (int j = 0; j <= s; j++)
//		{
//			printf(".");
//		}
//		s++;
//	}
//	printf(".");
//}

//void bai3_4_3_test(void)
//{
//	int canh = 0;
//	printf("canh = ");
//	int count = 0;
//	scanf("%d", &canh);
//	for (int i = 0; i < canh; i++)
//	{
//		for (int j = canh; j > i+1; j--)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k <= count; k++)
//		{
//			printf(".");
//		}
//		count++;
//		printf("\n");
//	}
//}

void bai3_4_3(void)
{
	int canh = 0;
	printf("canh = ");
	scanf("%d", &canh);
	for (int i = 1; i <= canh; i++)
	{
		for (int j = 1; j <= canh - i + 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
}

void bai3_4_4(void)
{
	int a = 0;
	printf("a = ");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int y = 1; y < a * 2; y++)
	{
		printf("*");
	}
	printf("\n");

	for (int x = 1; x <= a; x++)
	{
		for (int y = 1; y <= x; y++)
		{
			printf(" ");
		}
		for (int z = 1; z < (a - x) * 2; z++)
		{
			printf("*");
		}
		printf("\n");
	}
}