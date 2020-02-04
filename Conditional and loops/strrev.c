#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	char str[n];
	for(i=0;i<n;i++){
		scanf("%c",&str[i]);
	}
	for(i=0;i<n;i++){
		printf("%c",str[i]);
	}
	for(i=n-1;i>0;i--){
		scanf("%c",str[i]);
	}
}
