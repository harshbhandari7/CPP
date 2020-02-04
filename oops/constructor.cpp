#include<iostream>
class X{
    int i;
    float j;
    public:
    X(int i,float j);
    void show();
};
X::X(int l,float m){         // constructor outside class.
    i=l;                     // In c++, formal parameters must have diffrent name from as that of class members.
    j=m;                     //Not like python.
    
}
void X::show(){                          //member function outside class.
    std::cout<<"i is "<<i<<"\n";
    std::cout<<"j is "<<j<<"\n";
}
int main(){
    system("cls");
    X obj=X(1,1.1);
    obj.show();

}