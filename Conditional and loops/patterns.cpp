using namespace std;
#include<iostream>
int main(){
    int n;
    cin>>n;
    //1
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    //2
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    //3
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<"  ";
        }
        for(int k=0;k<i+1;k++){
            cout<<" "<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    //4
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int k=i;k<n;k++){
            cout<<" "<<"*";
        }
        cout<<"\n";
    }
    
    


}