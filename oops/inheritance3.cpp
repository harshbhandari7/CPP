//shadowing/overriding base class functions in derived class.
#include<iostream>
class Super{
    public:
    int i;
    void print(){
        std::cout<<"Super class print\n";
    } 
    void show(char c){
        std::cout<<"Super class show method "<<c<<"\n";
    }
};
class sub:public Super{
    public:
    int j;
    using Super::print;
    using Super::show;
    void print(){
        std::cout<<"Sub class print\n";
    }
    void show(int d){
        std::cout<<"Sub class show method "<<d<<"\n";
    }
};
int main(){
    sub obj;
    obj.print();      // this will call sub class print method.
    obj.show('h');
    obj.show(7);
}