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

void bai2_9(void)
{
	int n = 0, k = 0;
	printf("Nhap n va k: ");
	scanf("%d %d", &n, &k);
	int check = (n >> k) & 1;
	if (check == 1)
	{
		printf("ON\n");
	}
	else
	{
		printf("OFF\n");
	}
}

void bai2_10(void)
{
	int per = 0;
	printf("Nhap permissions: ");
	scanf("%d", &per);
	int write = (per >> 1) & 1;
	if(write == 1)
	{
		printf("Write Access Grante\n");
	}
	else
	{
		printf("Access Denied\n");
	}
}

void bai2_12(void)
{
	float luong_co_ban = 0;
	float so_gio_lam_viec = 0;
	float luong_thuc_nhan = 0;
	printf("Nhap luong co ban: ");
	scanf("%f", &luong_co_ban);
	printf("Nhap so gio lam viec: ");
	scanf("%f", &so_gio_lam_viec);
	if (so_gio_lam_viec > 160)
	{
		float luong_nhan = (160 * luong_co_ban) + (so_gio_lam_viec - 160) * luong_co_ban * 1.5;
		if (luong_nhan > 15000000)
		{
			luong_thuc_nhan = (luong_nhan * 0.9);
		}
		else
		{
			luong_thuc_nhan = (luong_nhan * 0.95);
		}
	}
	else
	{
		float luong_nhan = luong_co_ban * so_gio_lam_viec;
		if (luong_nhan > 15000000)
		{
			luong_thuc_nhan = (luong_nhan * 0.9);
		}
		else
		{
			luong_thuc_nhan = (luong_nhan * 0.95);
		}
	}
	printf("Luong thuc nhan: %.2f\n", luong_thuc_nhan);
}

void bai2_13(void)
{
	int x = 0, y = 0;
	printf("Nhap toa do x, y: ");
	scanf("%d %d", &x, &y);
	if (x == 0 && y == 0)
	{
		printf("Diem nam o goc toa do. \n");
	}
	else if (x == 0 && y != 0)
	{
		printf("Diem nam tren truc y. \n");
	}
	else if (x != 0 && y == 0)
	{
		printf("Diem nam tren truc x. \n");
	}
	else if (x > 0 && y > 0)
	{
		printf("Diem nam o goc phan tu thu nhat. \n");
	}
	else if(x < 0 && y > 0)
	{
		printf("Diem nam o goc phan tu thu hai. \n");
	}
	else if (x < 0 && y < 0)
	{
		printf("Diem nam o goc phan tu thu ba. \n");
	}
	else if (x > 0 && y < 0)
	{
		printf("Diem nam o goc phan tu thu tu. \n");
	}
}

void bai2_14(void)
{
	float chieu_cao = 0, can_nang = 0;
	printf("Nhap chieu cao, can nang: ");
	scanf("%f %f", &chieu_cao, &can_nang);
	float BMI = can_nang / (chieu_cao * chieu_cao);
	if (BMI < 18.5)
	{
		printf("Underweight \n");
	}
	else if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("Normal \n");
	}
	else if (BMI >= 25 && BMI <= 29.9)
	{
		printf("Overweight \n");
	}
	else
	{
		printf("Obese \n");
	}
}