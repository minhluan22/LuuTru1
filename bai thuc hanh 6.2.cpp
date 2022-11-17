#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct SinhVien
{
	char Masv[10];
	char Hotensv[30];
	char Gioitinh[10];
	int Namsinh;
	char Nganhhoc[30];
	float kq;
	char Xl[20];
	char Qquan[30];
};
typedef struct SinhVien SINHVIEN;
void timsv(SINHVIEN a[],int n);
void nhapsv(SINHVIEN &x);
void nhapsvn(SINHVIEN a[],int n);
void xuatn(SINHVIEN a[],int n);
void xuat(SINHVIEN x);
void sapxep(SINHVIEN a[],int n);
void ingx(SINHVIEN a[],int n);
int main()
{
	int n,key;
	SINHVIEN x,a[10];
	while(true)
	{
		system("cls");
		printf("\n\n\t\t********************************************\n");
		printf("\t\t**     CHUONG TRINH QUAN LI SIH VIEN      **\n");
		printf("\t\t**        1. Nhap DS sinh vien            **\n");
		printf("\t\t**        2. In DS Sinh vien              **\n");
		printf("\t\t**        3. Sap xep theo KQ cuoi khoa    **\n");
		printf("\t\t**        4. In SV Gioi, Xuat sac         **\n");
		printf("\t\t**        5. Tim kim SV theo MaSV         **\n");
		printf("\t\t**        6. Thoat                        **\n");
		printf("\t\t********************************************\n");

        printf("\n\n\t\t      AN PHIM CHON: ");
        scanf("%d",&key);
        switch(key)
        {
        	case 1:
        		do{
        			printf("\nNhap so luong SV: ");
        			scanf("%d",&n);
        		}while(n<=0);
        		nhapsvn(a,n);
        		printf("\nBam phim bat ki de tiep tuc! ");
        		getch();
        		break;
        	case 2:
        		xuatn(a,n);
        		printf("\nBam phim bat ki de tiep tuc! ");
        		getch();
        		break;
        	case 3:
			    sapxep(a,n);
        		printf("\nBam phim bat ki de tiep tuc! ");
				getch();
        		break;
        	case 4:
        		ingx(a,n);
        		printf("\nBam phim bat ki de tiep tuc! ");
        		break;
        	case 5:
        		timsv(a,n);
        		printf("\nBam phim bat ki de tiep tuc! ");
				getch();
        		break;
        	case 0:
        		exit(1);
        		default:
                printf("\nKhong co chuc nang nay! ");
        		printf("\nBam phim bat ki de tiep tuc! ");
				getch();
        		break;	
		}    
	}
}
void nhapsv(SINHVIEN &x)
{
    	fflush(stdin);
	printf("\nNhap ma Sinh Vien: ");
	gets(x.Masv);
	//scanf("%d",&x.Masv);
    	fflush(stdin);
	printf("\nNhap Ho Ten: ");
	gets(x.Hotensv);
    	fflush(stdin);
    printf("\nNhap Gioi Tinh: ");
	gets(x.Gioitinh);
    	fflush(stdin);
    printf("\nNhap Nganh Hoc: ");
	gets(x.Nganhhoc);
    	fflush(stdin);
    printf("\nNhap Que Quan: ");
	gets(x.Qquan);
    do
    {
    	printf("\nNhap nam sinh: ");
    	scanf("%d",&x.Namsinh);
    }while(x.Namsinh<1980||x.Namsinh>2010);
    
    do
    {
    	printf("\nNhap ket qua cuoi khoa: ");
    	scanf("%f",&x.kq);
    }while(x.kq<0||x.kq>4);
fflush(stdin);
    if(x.kq<=1.5)
    {strcpy(x.Xl,"Yeu");}
    else
    	if(x.kq<=2.5)
        {strcpy(x.Xl,"Trung binh");}
        else
            if(x.kq<=3.0)
            {strcpy(x.Xl,"Kha");}
        	else
            	if(x.kq<=3.8)
                {strcpy(x.Xl,"Gioi");}
                else
                {strcpy(x.Xl,"Xuat sac");}
}
void nhapsvn(SINHVIEN a[],int n)
{
	for(int i=0;i<n;i++)
	{
	    printf("\nNhap sinh vien thu %d: ",i+1);
		nhapsv(a[i]);
	}
}
void xuat(SINHVIEN x)
{
	printf("|%9s|%-13s|%-9s|%8d|%-13s|%11.1f|%-12s|%-12s|",x.Masv,x.Hotensv,x.Gioitinh,x.Namsinh,x.Nganhhoc,x.kq,x.Xl,x.Qquan);
}
void xuatn(SINHVIEN a[],int n)
{system("cls");
    printf("\n\n|----------------------------------------------------------------------------------------------|\n");
        printf("|  Ma SV  |  Ho Ten SV  |Gioi tinh|Nam sinh|  Nganh hoc  |  Ket qua  |  Xep loai  |  Que quan  |");
    for(int i=0;i<n;i++)
    {
      printf("\n|---------|-------------|---------|--------|-------------|-----------|------------|------------|\n");
      xuat(a[i]);
    }
}
void sapxep(SINHVIEN a[],int n)
{
	SINHVIEN tmp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].kq>a[j].kq)
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void ingx(SINHVIEN a[],int n)
{system("cls");
    printf("\n\n|----------------------------------------------------------------------------------------------|\n");
        printf("|  Ma SV  |  Ho Ten SV  |Gioi tinh|Nam sinh|  Nganh hoc  |  Ket qua  |  Xep loai  |  Que quan  |");
    for(int i=0;i<n;i++)
    if(a[i].kq>3.0)
    {
      printf("\n|---------|-------------|---------|--------|-------------|-----------|------------|------------|\n");
      xuat(a[i]);
    }
}
void timsv(SINHVIEN a[],int n)
{system("cls");
fflush(stdin);
char Matim[10];
printf("\nNhap ma SV can tim: ");
gets(Matim);
    printf("\n\n|----------------------------------------------------------------------------------------------|\n");
        printf("|  Ma SV  |  Ho Ten SV  |Gioi tinh|Nam sinh|  Nganh hoc  |  Ket qua  |  Xep loai  |  Que quan  |");
    for(int i=0;i<n;i++)
    if(strcmp(a[i].Masv,Matim)==0)
    {
      printf("\n|---------|-------------|---------|--------|-------------|-----------|------------|------------|\n");
      xuat(a[i]);
    }
}
