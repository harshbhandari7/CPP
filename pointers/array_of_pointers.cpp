using namespace std;
#include<iostream>
int main(){
    int a=10,b=20,c=30;
    int *arr[5];
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    cout<<*arr<<"\n";  //will print address of a
    cout<<*(*arr)<<"\n";  //will print 10 i.e value at address of a
    cout<<*(*(arr+2)); //will print 30
}