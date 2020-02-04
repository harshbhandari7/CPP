#include<iostream>
int main(){
    int n;
    std::cin>>n;
    char str[n];
    gets(str);
    std::cout<<"\n";
    int i=sizeof(str)/sizeof(char);
    std::cout<<i;
    for(i-1;i>-1;i--){
        std::cout<<str[i];
    } 
}