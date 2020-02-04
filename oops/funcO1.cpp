#include<iostream>
void sum(int a,int b){
    std::cout<<"both int \t";
    std::cout<<a+b<<"\n";
}

void sum(float a,float b){
    std::cout<<"both float\t";
    std::cout<<a+b<<"\n";
}

void sum(double a,int b){
    std::cout<<"int and float\t";
    std::cout<<a+b<<"\n";
}

int main(){
    int c,d;
    std::cout<<"Enter numbers\n";
    std::cin>>c>>d;
    sum(c,d);
    sum(10.5,1.5);
    sum(1.0,5);

    return 0;


}