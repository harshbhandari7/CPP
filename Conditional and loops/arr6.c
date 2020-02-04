#include<stdio.h>
int main(){
	int i;
	char ch[5];
	for(i=0;i<5;i++){
		scanf("%c",&ch[i]);
	} 
	printf("%d",strlen(ch));
	return 0;
}
