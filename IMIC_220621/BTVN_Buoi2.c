#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

void Thao_tac_bit_and(void)
{
	int a = 5;				// 0000 0101
	int b = 6;				// 0000 0110
	int c = a & b;			// 0000 0100
	printf("AND: c = %d\n", c);
}

void Thao_tac_bit_or(void)
{
	int a = 5;				// 0000 0101
	int b = 6;				// 0000 0110
	int c = a | b;			// 0000 0111
	printf("OR: c = %d\n", c);
}

void Thao_tac_bit_xor(void)
{
	int a = 5;				// 0000 0101
	int b = 6;				// 0000 0110
	int c = a ^ b;			// 0000 0011
	printf("XOR: c = %d\n", c);
}

void Left_shift(void)
{
	int a = 5;				// 0000 0101
	int b = a << 2;			// 0001 0100
	printf("LEFT_SHIFT: b = %d\n", b);
}

void Right_shift(void)
{
	int a = 5;				// 0000 0101
	int b = a >> 2;			// 0000 0001
	printf("RIGHT SHIFT: b = %d\n", b);
}

void bai2_5(void)
{
	int n;
	printf("Nhap n: "); scanf("%d", &n);
	printf("n x 2 = %d\n", n << 1);
	printf("n x 4 = %d\n", n << 2);
	printf("n x 8 = %d\n", n << 3);
}

void bai2_6(void)
{
	int n;
	printf("Nhap n: "); scanf("%d", &n);
	printf("n / 2 = %d\n", n >> 1);
	printf("n / 4 = %d\n", n >> 2);
}