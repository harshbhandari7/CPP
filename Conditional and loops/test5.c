#include<stdio.h>
int main(){
	int i,*p,arr[]={9,6,8,4,1,7,3,5,2};
	p=arr;
	for(i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("%d ",*(p+i));
	}
	return 0;
}
