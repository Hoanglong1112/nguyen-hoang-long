#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
void giai_phuong_trinh_bac_2(void)
{
	float a, b, c;
	float delta, x1, x2;
	printf("Nhap a = ");
	scanf("%f", &a);
	printf("Nhap b = ");
	scanf("%f", &b);
	printf("Nhap c = ");
	scanf("%f", &c);
	delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);
		printf("Gia tri x1 = %f\n", x1);
		printf("Gia tri x2 = %f\n", x2);
	}
	else if (delta == 0)
	{
		printf("Phuong trinh co nghiem kep = %f\n ", -b / (2 * a));
	}
	else
	{
		printf("Phuong trinh vo nghiem\n");
	}
}
void Bai1(void)
{
	int Masinhvien = 0;
	scanf("%d", &Masinhvien);
	float Diemtrungbinh = 0;
	scanf("%f", &Diemtrungbinh);
	printf("MSV: %d, GPA: %f\n", Masinhvien, Diemtrungbinh);
}
void Bai2(void)
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("Tong = %d\n", a + b);
	printf("Hieu = %d\n", a - b);
	printf("Tich = %d\n", a * b);
	printf("Thuong = %f\n", a / b);
}
void Bai3(void)
{
	float r = 0;
	float pi = 3.14;
	printf("r = ");
	scanf("%f", &r);
	printf("Chu vi = %f\n", 2 * pi * r);
	printf("Dien tich = %f\n", pi * r * r);

}
void Bai4(void)
{
	int a = 0;
	printf("a = ");
	scanf("%d", &a);
	printf("HEX = %x\n", a);
	printf("ASII = %c\n", a);
}