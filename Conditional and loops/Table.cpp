#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the Number ");
	scanf("%d",&n);
	i=1;
	while(i<=10){
		printf("%d",i*n);
		printf("\n");
		i++;
	}
	return 1;
}
