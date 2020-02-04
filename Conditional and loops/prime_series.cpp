#include<iostream>
using namespace std;
bool isprime(int m){
    for(int i=2;i<m;i++){
        if(m%i==0){
            return false;
        }
    return true;
    }
}
void printprime(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter number upto which you want your series  ";
    cin>>n;
    printprime(n);
    return 0;
}