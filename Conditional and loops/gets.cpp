#include<iostream>
using namespace std;
int main(){
	int ch;
	ch=getchar();              //to input and display a single character.
	putchar(ch); 
	
	char a[20];
	gets(a);
	cout<<"String is ";          //to input and display a string 
	puts(a);					 //also takes space as input unlike cin which doesn't take space as input.
	}
