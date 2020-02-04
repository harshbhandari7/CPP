#include<stdio.h>
int main(){
	int n,o,t,h,m;
	printf("Enter a number ");
	scanf("%d",&n);
	o=n%10;
	t=n/10;
	t=t%10;
	h=n/100;
	//printf("%d",h);
	m=(h*h*h)+(t*t*t)+(o*o*o);
	if(n==m){
		printf("%d ",n);
		printf("is an armstrong number");
	}
	else{
		printf("%d ",n);
		printf("is NOT an armstrong number");
	}
	
}
