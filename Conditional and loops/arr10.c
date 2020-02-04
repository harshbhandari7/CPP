#include<stdio.h>
int main(){
	int i,j;               // it is mandatory to intialise columns 
	int arr[][3]={
				  {2,2,2},
				  {3,3,3},
				  {4,4,4}
				  };
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	}

