#include<iostream>
int main(){
    char *name;
    std::cin>>name;
    for(int i=0;i<sizeof(name)/sizeof(char);i++){
        std::cout<<name[i];
    }
    return 0;
}