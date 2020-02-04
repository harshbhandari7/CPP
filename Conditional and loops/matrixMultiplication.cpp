#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j,k;
	
	printf("Enter the number of rows and columns of matrix 1 ");
	scanf("%d %d",&r1,&c1);
	
	printf("Enter the number of rows and columns of matrix 2 ");
	scanf("%d %d",&r2,&c2);
	
	int arr1[r1][c1];
	int arr2[r2][c2];
	
	printf("Enter values of Matrix 1 ");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d ",&arr1[i][j]);
		}
	}
	printf("Enter values of Matrix 2 ");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d ",&arr2[i][j]);
		}
	}
}
	
	



