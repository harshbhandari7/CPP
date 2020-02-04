using namespace std;
#include<iostream>
int main(){
    int a=10;
    char b='B';
    float c=25.2;
    int *iptr;
    char *cptr;
    float *fptr;
    iptr=&a;
    cptr=&b;
    fptr=&c;

    cout<<a<<"\n";
    cout<<*(&a)<<"\n";
    cout<<*iptr<<"\n";
    cout<<&a<<"\n";
    cout<<iptr<<"\n";
    cout<<&iptr<<"\n";

    return 0;

}