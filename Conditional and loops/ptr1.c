#include<stdio.h>
int main(){
	int i,*j;
	i=3;
	j=&i;
	
	printf("%d\n",i);
	printf("%d\n",&i);
	printf("%d\n",*(&i));
	printf("%d\n",j);
	printf("%d\n",&j);
	printf("%d\n",*(&j));
	printf("%d\n",*j);
}
