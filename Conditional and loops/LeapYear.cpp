#include<stdio.h>
int main(){
	int year;
	printf("Enter the year ");
	scanf("%d",&year);
	if(year%4==0&&year%400==0)
	{
		printf("%d ",year);
		printf("is a Leap year");
	}
	else
	{   printf("%d ",year);
		printf("is not a Leap year");
	}	
} 
