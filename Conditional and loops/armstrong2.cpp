using namespace std;
#include<iostream>
int main(){
    int num,o,t,h,temp,arm;
    for(num=101;num<1000;num++){
        o=num%10;
        temp=num/10;
        t=temp%10;
        h=temp/10;
        if(num==h*h*h+t*t*t+o*o*o){
            cout<<num<<" is an armstrong\n";
        }
    }
}
