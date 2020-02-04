#include<iostream>
using namespace std;
int main(){
	int num,i,fac;
	cout<<"Enter a number ";
	cin>>num;
	if(num==0){
		cout<<"factorial of 0 is 1";
	}
	else{
		fac=1;
		for(i=num;i>0;i--){
			fac=fac*i;
		}
	};
	cout<<"factorial is ";
	cout<<fac;
return 0;
}
