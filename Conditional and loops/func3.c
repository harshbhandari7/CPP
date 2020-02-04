#include<stdio.h>
int sum(int ,int );
int main(){
	int a,b,s;
	printf("Enter the numbers");
	scanf("%d %d",&a,&b);
	s=sum(a,b);
	printf("%d",s);
	
}
int sum(int x,int y){
	int s=x+y;
	return s;
	
}
