#include <stdio.h>
#include <stdlib.h>
int nhap2c(int *a,int n, int m);
int xuat2c(int *a,int n, int m);
int sx(int *a,int n, int m);
int main()
{
	int *a, n, m;
	a=(int*)calloc(25,sizeof(int));
	printf("\n nhap n"); scanf("%d",&n);
	printf("\n nhap m"); scanf ("%d",&m);
	nhap2c(a,n,m);
	xuat2c(a,n,m);
	printf("*******\n");
	sx(a,n,m);
    printf("+++++\n");
    xuat2c(a,n,m);
     
}
int nhap2c1(int *a,int n, int m)
{
	for(int i=0;i<n;i++);
	{for(int j=0; j<m;j++)
	 {
	 	printf("\n Nhap phan tu thu a[%d][%d]\t,i,j");
	 }
	}
}

int xuat2c(int *a,int n, int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
		printf("\n Nhap phan tu thu a [%d][%d]\t,i,t");
		scanf("%d",(a+i*n+j));	
		}
	}
}
	
int sx(int *a,int n, int m)
{   int tam, tich=m*n;
     for(int i=0;i<tich-1;i++)
         for(int j=i+1;j<tich;j++)
        {
         if(*(a+i)>*(a+j))
         {
          tam=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=tam;
         }
        }
}

