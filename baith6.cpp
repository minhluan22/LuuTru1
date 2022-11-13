#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct sinhvien
{
	char masv[10];
	char hotensv[30];
	char phai[10];
	int namsinh;
	char nganhhoc[30];
	float kqcuoikhoa;
	char xeploai[20];
	char quequan[30];
	
};
typedef struct sinhvien SINHVIEN ;
void timsv(SINHVIEN a[],int n);
void INGX(SINHVIEN a[],int n);
void sapxep(SINHVIEN a[],int n);
void nhapsv(SINHVIEN &x);
void nhapsvN(SINHVIEN a[],int n);
void xuatsv(SINHVIEN );
void xuatsvN(SINHVIEN a[],int n);
int main ()
{
	
	int n;
	SINHVIEN x,a[10];
	printf("\n Nhap so luong sinh vien : ");
	scanf("%d",&n);
	nhapsvN(a,n);
	xuatsvN(a,n);
	printf("\n An mot phim bat ky de in danh sach sap xep ");
	getch();
	sapxep(a,n);
	xuatsvN(a,n);
	printf("\n An mot phim bat ky de in danh sach GIOI_XUAT_SAC ");
	getch();
	INGX(a,n);
	printf("\n An Mot phim bat ky de tim sinh vien");
	getch();
	timsv(a,n);
	
}
void nhapsv(SINHVIEN &x)
{
	fflush(stdin);
	printf("\n Nhap ma SV :");
	gets(x.masv); // scanf("%d",&x.masv);
	fflush(stdin);
	printf("\n Nhap ho ten :");
	gets(x.hotensv);
	fflush(stdin);
	printf("\n Nhap phai :");
	gets(x.phai);
	fflush(stdin);
	printf("\n Nhap nganh hoc :");
	gets(x.nganhhoc);
	fflush(stdin);
	printf("\n  Nhap que quan :");
	gets(x.quequan);
	
		do
		{
			printf(" \n Nhap nam sinh :");
			scanf("%d",&x.namsinh);
		}
		while (x.namsinh<1990 || x.namsinh>2005);
		
		do
		{
		printf("\n Nhap Ket Qua Cuoi Khoa :");
		scanf("%f",&x.kqcuoikhoa);
		}
		while (x.kqcuoikhoa<0 || x.kqcuoikhoa>4);
		fflush(stdin);
		if (x.kqcuoikhoa <=1.5)
		{
			strcpy(x.xeploai,"YEU");
		}
		else 
			if (x.kqcuoikhoa <=2.5)
			{
				strcpy(x.xeploai,"TRUNG BINH");	
			}
			else 
				if(x.kqcuoikhoa <=3.0)
				{
					strcpy(x.xeploai,"KHA");
				}
				else
					if(x.kqcuoikhoa <=3.8)
					{
						strcpy(x.xeploai,"GIOI");
					}
					else 
					{
						strcpy (x.xeploai,"XUAT SAC");
					}
}
void nhapsvN(SINHVIEN a[],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("\nNhap sinh vien thu %d",i+1);
		nhapsv(a[i]);
	}
	
}
void xuatsv(SINHVIEN x)
{
	printf("|%5s|%-18s|%-6s|%10d|%-11s|%12.1f|%-10s|%-10s|",x.masv,x.hotensv,x.phai,x.namsinh,x.nganhhoc,x.kqcuoikhoa,x.xeploai,x.quequan);
}
void xuatsvN(SINHVIEN a[],int n)
{
	system("clms");
	printf("\n\n|-----------------------------------------------------------------------------------------|\n");
		printf("|Ma SV| Ho Ten Sinh vien | Phai | Nam Sinh | Nganh Hoc |KQ cuoi khoa| Xep Loai | Que Quan |");
	for (int i=0;i<n;i++)
	{
	  printf("\n|-----|------------------|------|----------|-----------|------------|----------|----------|\n");
		xuatsv(a[i]);
	}
}
void sapxep(SINHVIEN a[],int n)
{
	SINHVIEN tmp;
	for (int i=0;i <n;++i)
	{
		for (int j=i+1;j<n;++j)
		{
			if (a[i].kqcuoikhoa >a[j].kqcuoikhoa)
				{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				}
		}
	}
}
void INGX(SINHVIEN a[],int n)
{
	system("cls");
	printf("\n\n|-----------------------------------------------------------------------------------------|\n");
		printf("|Ma SV| Ho Ten Sinh Vien | Phai | Nam Sinh | Nganh Hoc |KQ cuoi khoa| Xep Loai | Que Quan |");
		for (int i=0;i<n;i++)
		{
			if (a[i].kqcuoikhoa>=3.0)
			{
	  printf("\n|-----|------------------|------|----------|-----------|------------|----------|----------|\n");
			xuatsv(a[i]);
			}
		}
}
void timsv(SINHVIEN a[],int n)
{
	system("cls");
	fflush(stdin);
	char matim[10];
	printf("\n Nhap ma sinh vien can tim :");
	gets(matim);
	printf("\n\n|-----------------------------------------------------------------------------------------|\n");
		printf("|Ma SV| Ho Ten Sinh Vien | Phai | Nam Sinh | Nganh Hoc |KQ cuoi khoa| Xep Loai | Que Quan |");
		for (int i=0;i<n;i++)
		{
			if (strcmp(a[i].masv,matim)==0)
			{
	  printf("\n|-----|------------------|------|----------|-----------|------------|----------|----------|\n");

			xuatsv(a[i]);
			}
		}
}





























