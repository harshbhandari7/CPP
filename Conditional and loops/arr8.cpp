#include<stdio.h>
int main(){
	int i,ar[26];
	ar[0]='A';
	for(i=0;i<26;i++){
		ar[i]+=ar[0];
		printf("%d",ar[i]);
		printf("\n%c",ar[i]);
	}
}
