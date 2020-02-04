#include<iostream>
using namespace std;
int main(){
	int h,t,u,temp,i;
	 for(i=101;i<1000;i++){
	 	u=i%10;
	 	temp=i/10;
	 	t=temp%10;
	 	h=temp/10;
	 	//num=h*h*h+t*t*t+u*u*u;
	 	if(i==h*h*h+t*t*t+u*u*u){
	 		cout<<i<<"\n";
		 }
	 }
}
