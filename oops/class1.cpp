#include<iostream>
class Student{
    int rollno=0;
    char *sname;
    char grade;
    float totalmarks=0.0;
    public:
        void setData(int r,char *s,char g,float t){
            rollno=r;
            sname=s;
            grade=g;
            totalmarks=t;
        }

        void getdata(){
            std::cout<<"Roll No is "<<rollno<<"\n";
            std::cout<<"Name is "<<sname<<"\n";
            std::cout<<"grade is "<<grade<<"\n";
            std::cout<<"totalmarks is "<<totalmarks<<"\n";
        }
};
int main(){
    Student s1;
    s1.setData(1,"Ron Weasely",'C',297.50);
    s1.getdata();
    return 0;


}