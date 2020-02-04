#include<stdio.h>
int main(){
	int i,arr[]={5,6,7,8,11,9};
	int *p;
	p=arr;
	int n=sizeof(arr)/sizeof(int) ;  // it gives no of elements in the array.
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	return 0;
}
