#include<iostream>
using namespace std;
int main(){
	char ch;
	int value;
	cout<<"Enter a Character ";
	cin>>ch;
	if(ch>='a'& ch<='z'){
		value=int(ch);
		cout<<"Ascii value is "<<value;
		}
	else if(ch>='A'&& ch<='Z'){
		value=int(ch);
		cout<<"Ascii value is "<<value;
	}
	else{
		value=int(ch);
		cout<<"Ascii value is "<<value;
	}
}
	

