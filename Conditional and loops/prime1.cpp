//To check whether a number is prime or not.
using namespace std;
#include<iostream>
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int ctr=0;
    for(int i=2;i<n/2;i++){
        if(n%i!=0){
            continue;
        }
        else{
            ctr=1;
            break;
        }
    }
    if(ctr==1){
        cout<<"Not Prime ";
    }
    else{
        cout<<"Prime ";
    }
    return 0;
}