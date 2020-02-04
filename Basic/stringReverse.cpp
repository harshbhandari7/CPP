#include<iostream>
int main(){
    char str[20];
    int n;
    std::cout<<"No. of characters you want ";
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>str[i];
    }
    std::cout<<"String is ";
    for(int i=0;i<n;i++){
        std::cout<<str[i];
    }
    std::cout<<"\nReversed string is ";

    for(int i=n-1;i>-1;i--){
        std::cout<<str[i];
    }
    return 0;
}
