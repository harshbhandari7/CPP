#include<iostream>
class X{
    public:                     //access specifier is must.

    X(){
        std::cout<<"object created "<<"\n";
    }

    ~X(){
        std::cout<<"object destroyed"<<"\n";   //first obj2 will be destroyed, then obj1.
    }
};
int main(){
    X obj1;
    X obj2;

}