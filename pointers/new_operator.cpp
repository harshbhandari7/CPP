using namespace std;
#include<iostream>
int main(){
    //1
    int *iptr;
    iptr=new int;   //dynamic alloction of memory
    *iptr=10;
    cout<<*iptr;

    //2
    char *cptr=new char('A');
    cout<<"\n"<<*cptr<<"\n";

    //3 Array
    int a=10;
    int *arr=new int[5]{1,2,3,4,5};
    //cout<<*arr<<" "<<*(arr+1);
    int i=0;
    while(i<5){
        cout<<*arr<<" ";
        i+=1;
        arr+=1;
    }
    

}