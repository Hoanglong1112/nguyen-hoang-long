#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
/*
Cấu trúc If-Else
*/
void Buoi2_3(void)
{
	int nam = 0;
	printf("Nhap vao nam: ");
	scanf("%d", &nam);
	if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
	{
		printf("Nam %d la nam nhuan \n", nam);
	}
	else
	{
		printf("Nam %d khong phaoi la nam nhuan \n", nam);
	}
}

void Buoi2_4(void)
{
	float a = 0, b = 0, c = 0;
	printf("Nhap do dai 3 canh: "); 
	scanf("%f%f%f", &a, &b, &c);
	if (a + b > c)
	{
		printf("Tam giac hop le \n");
	}
	else if (a + c > b)
	{
		printf("Tam giac hop le \n");
	}
	else if (b + c > a)
	{
		printf("Tam giac hop le \n");
	}
	else
	{
		printf("Tam giac khong hop le \n");
	}
}

/*
Cấu trúc Switch-case
*/

void Buoi2_6(void)
{
	float a = 0, b = 0;
	char phep_tinh = 0;
	printf("Nhap 2 do thuc: "); scanf("%f%f", &a, &b);
	printf("Nhap phep tinh: "); scanf(" %c", &phep_tinh);
	switch (phep_tinh)
	{
	case '+':
		printf("Ket qua: %.2f\n", a + b);
		break;
	case '-':
		printf("Ket qua: %.2f\n", a - b);
		break;
	case '*':
		printf("Ket qua: %.2f\n", a * b);
		break;
	case '/':
		printf("Ket qua: %.2f\n", a / b);
		break;
	default:
		printf("Invalid Operator \n");
		break;
	}
}

void Buoi2_8(void)
{
	int thang = 0;
	printf("Nhap thang: "); scanf("%d", &thang);
	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("Thang co 31 ngay \n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("Thang co 30 ngay \n");
		break;
	case 2:
		printf("Thang co 29 ngay \n");
		break;
	default:
		printf("Thang nhap vao khong hop le \n");
		break;
	}
}

