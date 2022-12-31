#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int chuanhoa(char s[50]);
int xoa(char s[50],int vitrixoa);
int xoakt(char s[50]);
int demtu(char s[50]);
int demkt(char s[50]);
void ghep(char s[50], char s2[50]);
int ktdx(int a[],char s[30]);



int main()
{ char s[50], s2[50], key;
	while(true)
	{
	system("cls");
	printf("************************************\n");
	printf("** THAO TAC TREN CHUOI **\n");
	printf("** 1. Nhap va chuan hoa chuoi **\n");
	printf("** 2. Dem so tu trong chuoi **\n");
	printf("** 3. Ghep chuoi **\n");
	printf("** 4. Kiem tra doi xung **\n");
	printf("** 5. In chuoi dao nguoc **\n");
	printf("** 0. Thoat **\n");
	printf("*************************************\n");
	fflush(stdin);
	printf("\n \t\t AN PHIM CHON: ");
	scanf("%d",&key);
	switch(key)
		{
	case 1:
	fflush(stdin);
	chuanhoa(s);
	//goi ham de thuc hien cong viec tuong ung
	printf("\nBam phim bat ky de tiep tuc!");
	getch();
	break;
	case 2:
	fflush(stdin);
	demtu(s);
	//goi ham thuc de hien cong viec tuong ung
	printf("\nBam phim bat ky de tiep tuc!");
	getch();
	break;
	case 0:
	exit(1);
	default:
	printf("\nKhong co chuc nang nay!");
	printf("\nBam phim bat ky de tiep tuc!");
	getch();
	break;
		}
	}
}
int chuanhoa(char s[50])
{
	printf("\n Nhap chuoi :");
	gets(s);
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for (int i=0;i<strlen(s);i++)
		{
			if (s[i]==' '&& s[i+1]!=' ')
			s[i+1]=s[i+1]-32;
		}
	printf("\n Chuoi Chuan Hoa: %s",s);
}
	int xoa(char s[50],int vitrixoa)
{
	int n=strlen(s);
	for (int i=vitrixoa;i<n;i++)
	s[i]=s[i+1];
	s[n-1]='\0';
}
	int  xoakt(char s[50])
{
	for (int i=0;i<strlen(s);i++)
	if (s[i]==' '&& s[i+1]==' ')
	{
		xoa(s,i);
		i--;	
	}
	if (s[0]==' ')
		xoa(s,0);
	if (s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
}
int demtu(char s[50])
	{
		int i,demtu =1 ;
		strlwr(s);
		for (i=0;i<strlen(s);i++)
		{
			if (s[i]==' ')
			demtu++;
		}
		printf("\n So tu la :%d",demtu);
	}
