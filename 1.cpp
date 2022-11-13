#include "stdio.h"
#include "string.h"
int kiemTraDoiXung(char x[]){
	// 1 -> doi xung
	// 0 -> khong doi xung
	// TITT
	size_t len = strlen(x);
	for(int i=0; i<len/2; i++){
		if(x[i]!=x[len-i-1])
			return 0;
	}
	return 1;
}
void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	// TITV\n\0 => TITV\0\0
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

int main(){
	char s[50];
	printf("Nhap s = ");
	fgets(s, sizeof(s), stdin);
	xoaXuongDong(s);
	if (kiemTraDoiXung(s)){
		printf("Day la chuoi doi xung!");
	}else{
		printf("Day la chuoi khong doi xung!");
	}
	
}
