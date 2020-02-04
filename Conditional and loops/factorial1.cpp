using namespace std;
#include<iostream>
int main(){
    int num;
    cout<<"Enter num ";
    cin>>num;
    int fac=1;
    for(int i=num;i>1;i--){
        fac=fac*i;
   }
   cout<<"Factorial of "<<num<<" is "<<fac;
   return 0;
}