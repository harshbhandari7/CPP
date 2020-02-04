//working of constructors in Inheritance.
#include<iostream>
class Super{
    int i,j;
    public:
    Super(int p,int q){
        std::cout<<"base class constructor called\n";
        i=p;
        j=q;
    }
    //public:
    void getData(){
        std::cout<<"The value of i and j is "<<i<<" "<<j<<"\n";
    }
};

class Sub:public Super{
    int k;
    public:
    Sub(int p,int q):Super(p,q){                         //Base cons is parameterized, so derived cons take 
        std::cout<<"Derived class constructor\n";       //parameters and pass it to base.
    }
};
int main(){
    Sub obj(20,40);     // when obj is created, Base cons is invoked with the parameters. and then derived cons.
    obj.getData();
    return 0;

    
}