#include<stdio.h>
int main(){
	int *a,i;
	int age[10];
	printf("Enter values ");
	for(i=0;i<10;i++){
		scanf("%d",&age[i]);
	}
	a=age;
	
	printf("a points to %d \n ",*a);
	printf("age points to %d ",*age);
	
	printf("%d \n",age); //address
	printf("%d \n",a);		//	# address same as that of age
	
	printf("%d \n",age[3]);
	printf("%d \n ",*(age+3));
	return 0;
}
