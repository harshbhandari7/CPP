#include<iostream>
using namespace std;
int main(){
	int num,i,ctr;
	cout<<"enter number ";
	cin>>num;
	
	//if (num==)
	for(i=2;i<(num/2)+1;i++){
		if(num%i==0){
			ctr=1;
		}
		else
			ctr=0;
    }
	if(ctr==0){
		cout<<"number is prime ";
	}
	else{
		cout<<"Number is not prime ";
	}
		

}
