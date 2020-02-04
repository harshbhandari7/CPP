#include<iostream>
using namespace std;

int main(){
	
	int ch,num,fac,i,ctr;
	char choice;
	
		do{
		cout<<"Enter a number ";
		cin>>num;
		cout<<"\n 1. Factorial";
		cout<<"\n 2. Prime or not";
		cout<<"\n 3. Odd or even";
		cout<<"\n 4. Exit";
		cout<<"\n Enter your Choice ";
		cin>>ch;
		switch(ch){
			case 1:
				if(num==0){
					cout<<"Factorial is 1";
				}
				else{
					fac=1;
					for(i=num;i>0;i--){
						fac=fac*i;
					}
				cout<<"factorial is "+fac;
				}
				break;
			case 2:
				for(i=2;i<(num/2)+1;i++){
					if(num%i==0){
						ctr=1;
					}
					else
					{
						ctr=0;
    				}
				}	
				if(ctr==0){
					cout<<"number is prime ";
				}
				else{
					cout<<"Number is not prime ";
				}
				break;
			case 3:
				if(num%2==0){
					cout<<"Number is even";
				}
				else{
					cout<<"Number is Odd";
				}
				break;
			case 4:
				break;
			default:
				cout<<"Enter in range 1-4";
				break;
				   		
		}
		cout<<"\n want to check for another number, press y/n ";
		cin>>choice;
	}
	while(choice=='y'||choice=='Y');
return 0;
}

