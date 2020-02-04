#include<stdio.h>
int main(){
	/*char str[]="harsh Bhandari";
	printf("%c",str);
	*/
	int i;
	char str[10];
	for(i=0;i<10;i++){
		scanf("%d",&str[i]);
	}
	printf("%s",strrev(str));
	return 0;
}
