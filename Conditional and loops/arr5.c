#include<stdio.h>
#include<string.h>
int main(){
	int i,n;
	char str[]="harsh";
	printf("%s\n",str);
	printf("Enter size");
	scanf("%d",&n);
	char arr[n];
	for(i=0;i<n;i++){
		scanf("%c",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%c",arr[i]);
	}
	char arr1[8]={'B','h','a','n','d','a','r','i'};
	printf("\n%d",strlen(arr));
	printf("\n%d",strlen(arr1));
	printf(strcat(arr,arr1));
	printf("\n%d",strlen("qwerty"));
	printf("\n%d",strlen("harsh"));   // length is 5
	return 1;
}

