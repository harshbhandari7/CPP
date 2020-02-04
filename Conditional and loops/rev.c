#include<stdio.h>
int main(){
	int i,n;
	printf("Enter size of array ");
	scanf("%d",&n);
	char arr[n];
	gets(arr);
	for(i=n-1;i>=0;i--){
		printf("%c",arr[i]);
	}
	return 0;
}
