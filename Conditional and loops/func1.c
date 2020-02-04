#include<stdio.h>
int main(){
	int calcSum();
	int a,b,c,sum;
	printf("Enter values");
	scanf("%d %d %d",&a,&b,&c);
	sum=calcSum(a,b,c);
	printf("The sum is %d",sum);
	return(0);
}
int calcSum(int x,int y,int z){
	int d;
	d=x+y+z;
	return d;
}
