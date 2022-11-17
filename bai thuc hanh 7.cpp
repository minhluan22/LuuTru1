#include "cstdio"
#include "conio.h"
#include "stdlib.h"
void NhapMang(int *a, int n);
void Xuat(int *a, int n);
void Nhap(int &n);
void tinhtich(int *a, int n);
int gtln(int *a,int n);
void  tongnt(int *a,int n);
int main()
{
    int *a, n;
    a = (int*)malloc(n * sizeof(int));

    Nhap(n);
    NhapMang(a,n);
    Xuat(a,n);
    tinhtich(a,n);
    gtln(a,n);
    tongnt(a,n);
    
}

void NhapMang(int *a, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("Nhap a[%d]: ",(i + 1));
        scanf("%d",&a[i]);
    }
}

void Xuat(int *a, int n)
{
    printf("Mang vua nhap: \n");
    for (int i=0;i<n;i++)
    printf("a[%d] = %d\n",i,a[i]);
}
void Nhap(int &n)
{
     printf("Nhap so phan tu: ");
     scanf("%d",&n);
}
void tinhtich(int *a, int n)
{
       int tich=1;
       for(int i = 0; i<n ; i++)
       {
       tich= tich * a[i];
   		}
       printf("\nTich trong mang la: %d",tich);
}
int gtln(int *a,int n)
{
    int *max=a;
   
    for(int i=1;i<n;i++)
    {
        if(max[i] > *max)
            *max=max[i];
    {
    	printf("\ngia tri lon nhat cua mang la : %d",*max);
    }
    return *max;
}
}
void tongnt(int *a,int n)
{
	int tong=0;
	int j;
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=2;j<=a[i];j++)
		{
			if(a[i]%j==0)
		    	dem++;
		}
        if(dem==1)
    	printf("\ntPhan tu a[%d]=%d la so nguyen to",i,a[i]);
    	tong=tong+a[i];
	}
	printf("\n tong cac so nguyen to la %d",tong);
}




 
