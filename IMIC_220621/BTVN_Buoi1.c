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

void bai1_2_5(void)
{
	int n;
	printf("Nhap n: "); scanf("%d", &n);
	printf("n x 2 = %d\n", n << 1);
	printf("n x 4 = %d\n", n << 2);
	printf("n x 8 = %d\n", n << 3);
}

void bai1_2_6(void)
{
	int n;
	printf("Nhap n: "); scanf("%d", &n);
	printf("n / 2 = %d\n", n >> 1);
	printf("n / 4 = %d\n", n >> 2);
}

void bai1_2_7(void)
{
	int a = 0, b = 0;
	printf("Nhap a va b: "); scanf("%d %d", &a, &b);
	printf("2 so truoc khi dao: %d, %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("2 so sau khi dao: %d, %d\n", a, b);
}
// Set bit
void bai1_2_8(void)
{
	int n = 0;
	printf("Nhap n: ");	
	scanf("%d", &n);
	n = n | (1 << 0) | (1 << 3);
	printf("HEX: n = 0x%x\n", n);
}
//Clear bit
void bai1_2_9(void)
{
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	n &= ~(1 << 0);
	printf("Clear bit 0: n = %d\n", n);
}
//Logic Gate Simulation
void bai1_2_10(void)
{
	int a = 0, b = 0;
	printf("Nhap a va b: ");	
	scanf("%d %d", &a, &b);
	int an = a & b;
	int xo = a ^ b;
	int o  = a | b;
	int ot = ~a;
	printf("DEC: AND = %d\n", an);
	printf("HEX: AND = 0x%x\n", an);

	printf("DEC: XOR = %d\n", xo);
	printf("HEX: XOR = 0x%x\n", xo);

	printf("DEC: OR = %d\n", o);
	printf("HEX: OR = 0x%x\n", o);

	printf("DEC: NOT = %d\n", ot);
	printf("HEX: NOT = 0x%x\n", ot);
}