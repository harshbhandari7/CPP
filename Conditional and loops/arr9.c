#include<stdio.h>
int main(){
	int i,ar[26];
	for(i=0;i<26;i++){
		ar[i]='A'+ar[i];
		printf("%d %c\n",ar[i],ar[i]);
	}
}

