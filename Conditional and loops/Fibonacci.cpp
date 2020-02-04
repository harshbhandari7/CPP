#include<stdio.h>
int main(){
	int i,a,b,c,n;
	a=-1,b=1;
	printf("Enter the Number of fibonacci numbers You want to print ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		c=a+b;
		printf("%d  ",c);
		a=b;
		b=c;
		
	}
	return 0;
}
