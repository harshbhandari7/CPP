using namespace std;
#include<iostream>
int main(){
    int num,rev=0,n,digit;
    cin>>num;
    n=num;
    do{
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    while(n !=0);
    if(rev==num){
        cout<<"palindrome ";
    }
    else{
        cout<<"Not Palindrome ";
    }

    return 0;
}