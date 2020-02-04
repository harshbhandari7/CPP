using namespace std;
#include<iostream>
int main(){
    int i=-1,j=1;
    int ctr=0,n;
    cout<<"Enter no of elements you want in the series ";
    cin>>n;
    while(ctr!=n){
        int temp=i+j;
        i=j;
        j=temp;
        cout<<temp<<" ";
        ctr+=1;
    }
    
    return 0;
}