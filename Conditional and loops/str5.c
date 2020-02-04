#include<stdio.h>
int main(){
	char a[]="abcdefgh";
	char b[6]="qwerty";
	
	printf("%s",a);
	printf("\n%d",strlen(a));
	printf("\n%d",strlen(b));
	
	printf("\n%d",sizeof(a));
	printf("\n%d",sizeof(b));
	return 0;
	}
	
