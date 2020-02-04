
#include<stdio.h>
int main(){
	int i,a,b,c,n;
	a=-1,b=1;
	printf("Enter the Number upto which you want to print fibonacci numbers ");
	scanf("%d",&n);
	for(c=0;c<=(n-a)+1;c++){
		c=a+b;
		printf("%d  ",c);
		a=b;
		b=c;
		
	}
	return 0;
}
