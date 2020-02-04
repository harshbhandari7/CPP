using namespace std;
#include<iostream>
bool leap(int y){
    if(y%400==0){
        return true;
    }
    if(y%100==0)
    {
        return false;
    }
    if(y%4==0){
        return true;
    }
    return false;
    
}
int main(){
    int y;
    cout<<"Enter year ";
    cin>>y;
    if(leap(y)==true){
        cout<<"Leap year";
    }
    else{
        cout<<"Not a Leap year";
    }

    return 0;
    
}