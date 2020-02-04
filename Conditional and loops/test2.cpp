#include<stdio.h>
int main(){
	int i,j,m,n;
	scanf("%d %d ",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("values are ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
			
		}
	}
}
