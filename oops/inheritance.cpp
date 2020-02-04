#include<iostream>
class Base{
    int i;
    float j;       // i and j are private members.
    public:
    void setData(int a, int b){               //setting values for private members.
        i=a;
        j=b;
    }
    void getData(){
        std::cout<<"Accessing private members of a class through non private members \n";
        std::cout<<"value of i and j "<<i<<" "<<j;                    //accessing private members.
    }
};
class Sub: public Base{
    int k=10;
    public:
    void getData2(){
        getData();                           //calling base class public member function from sub clas.
        std::cout<<"\nK is "<<k;            //accsessing private members from  this method.
    }
};
int main(){ 
    Sub obj;                                  //calling base class method from object and 
    obj.setData(20,40);
    obj.getData2();
    return 0;
} 