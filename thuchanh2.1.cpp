#include<stdio.h>
void nhapmang(int a[],int n);
void xuatmang(int a[],int n);
void giatriln(int a[],int n);
void giatrinn(int a[],int n);
int main()
//nhap phan tu n
{
		int n; int a[10];
		printf("\nNhap Phan tu n :");
		scanf("%d",&n);
		nhapmang(a,n);
		xuatmang(a,n);
		giatriln(a,n);
		giatrinn(a,n);
		return 0;
}
// nhap phan tu cua mang A

		void nhapmang(int a[],int n)
{
		for (int i=0; i < n ;i++)
{	
		printf("phan tu thu a [%d]=",i);
		scanf("%d",&a[i]);
}}
// xuat mang 
void xuatmang(int a[],int n)
{
	for (int i=0;i<n ;i++)
{
	printf("\nPhan tu cua mang la :[%d]",a[i]);
}

//tim gia tri lon nhat cua mang
void giatriln(int a[],int n)
{

	int max =0;
	for (int i=1;i<n;i++)
{
	if (max	<=a[i])
}
	max =a[i];
}

	printf("\nGia tri lon nhat la: %d ",max);
// tim gia tri nho nhat cua mang
void giatrinn(int a[],int n)
{	
	int min =0;
	for (int i=1;i<n;i++)
{
	if min(min >=a[i])
	min =a[i];
}
	printf("\n Gia Tri Nho Nhat : %d",min);
}


	
	
	
