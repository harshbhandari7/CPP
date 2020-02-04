#include<stdio.h>
void message();
void main(){
	printf("calling message");
	message();                                 //returning a value 3221225725 what doess this means.
	return 0;
}
void message(){
	printf("calling main");
	main();
	
}
