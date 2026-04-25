#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
void kiemtrachanle(void) {
	int n = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("n la so chan\n");
	}
	else
	{
		printf("n la so le\n");
	}
}
void Solonnhat(void)
{
	int a = 0, b = 0, c = 0 , max = 0;
	printf("Nhap a, b, c ");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	if (max < c)
	{
		max = c;
	}
	printf("Max = %d\n", max);

}

//void Hoc_luc(void)
//{
//	float diem = 0.0;
//	printf("Nhap diem: ");
//	scanf("%f", &diem);
//
//	if (diem >= 8.0)
//	{
//		printf("Loai gioi \n");
//	}
//	else if (diem >= 6.5 && diem < 8.0)
//	{
//		printf("Loai kha \n");
//	}
//	else if (diem >= 5.0 && diem < 6.5)
//	{
//		printf("Loai trung binh \n");
//	}
//	else
//	{
//		printf("Loai kem \n");
//	}
//
//}

void Thutrongtuan(void)
{
	int thu = 0;
	printf("Nhap thu: ");
	scanf("%d", &thu);
	switch (thu)
	{
		case 1:
			printf("SUNDAY \n");
			break;
		case 2:
			printf("MONDAY \n");
			break;
		case 3:
			printf("TUESDAY \n");
			break;
		case 4:
			printf("WEDNESDAY \n");
			break;
		case 5:
			printf("THURSDAY \n");
			break;
		case 6:
			printf("FRIDAY \n");
			break;
		case 7: 
			printf("Saturday \n");
			break;
		default:
			printf("Invalid input \n");
			break;
	}
}

void Bangcuuchuong2(void)
{
	printf("Bang cuu chuong 2: \n");
	for (int i = 0; i < 11; i++)
	{
		printf("2 * %d = %d\n", i, 2 * i);
	}
}

void Bangcuuchuong(void)
{
	printf("Bang cuu chuong: \n");
	for (int i = 2; i < 11; i++)
	{	
		printf("Bang cuu chuong %d: \n", i);
		for (int j = 0; j < 11; j++)
		{
			printf("%d * %d = %d\n",i, j, i * j);
		}
	}
}

void Bangcuuchuong_not4(void)
{
	{
		printf("Bang cuu chuong: \n");
		for (int i = 2; i < 10; i++)
		{
			if (i == 4)
			{
				continue; // Bỏ qua các câu lệnh phía dưới
				 //break; //Thoát khỏi vòng lặp for
			}
			printf("Bang cuu chuong %d: \n", i);
			for (int j = 0; j < 11; j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);
			}
		}
	}
}

void buoi3_bai7(void)
{
	float diem = -1;
	int count = 0;
	do
	{
		printf("Diem khong hop le, nhap diem: ");
		scanf("%f", &diem);
		if (diem < 0 || diem > 10)
		{
			count++;
		}
		if (count > 3)
		{	
			printf("Nhap qua 3 lan, diem khong hop le \n");
			break;
		}
	} while ((diem < 0 || diem > 10));


	if (diem >= 0 && diem <= 10)
	{
		printf("Diem hop le \n");
	}

}

void buoi3_bai8(void)
{
	int buoc = 1;
	int mat_khau_nhap = 0;
	int mat_khau_dung = 1234;
	int so_tien_can_rut = 0;
	int so_tien_gioi_han = 100000;
	while (buoc != 5)
	{
		switch (buoc)
		{
			case 1:
				printf("Nhap mat khau: ");
				scanf("%d", &mat_khau_nhap);
				if (mat_khau_nhap == mat_khau_dung)
				{
					buoc++;
				}
				else 
				{
					buoc = 6;
				}
				break;
			case 2:
				printf("Nhap so tien can rut: ");
				scanf("%d", &so_tien_can_rut);
				buoc++;
				break;
			case 3:
				if (so_tien_can_rut <= so_tien_gioi_han)
				{
					buoc++;
				}
				else
				{
					printf("So tien vuot qua gioi han \n");
					buoc = 2;
				}
				break;
			case 4:
				printf("So tien ban rut la: %d\n", so_tien_can_rut);
				buoc++;
				break;
			case 5:
				continue;
			case 6:
				int Dongy = 0;
				printf("Ban co muon tiep tuc khong \n");
				scanf("%d", &Dongy);
				if (Dongy == 1)
				{
					buoc = 1;
				}
				else
				{
					continue;
				}
				break;
		}
	}
}