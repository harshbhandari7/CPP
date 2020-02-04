#include<stdio.h>
# define n '\n'
int main(){
	float a,b,c;
	printf("enter values of a and b \n");
	scanf("%f %f",&a,&b,n);
//	printf("%f %f",a,b);

	printf("\nThe sum of a and b is %f ",a+b);
	printf("\nThe Difference of a and b is %f",a-b);
	printf("\nThe product of a and b is %f ",a*b);
}
