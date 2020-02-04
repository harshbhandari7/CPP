#include<stdio.h>
int main(){
	int i,arr[]={1,2,3,4,5,6,7};
	int *p;
	p=arr;
	printf("%d",sizeof(arr));
	for(i=0;i<7;i++){
		printf("%d ",*(p+i));
	}
	return 0;
}
