#include<iostream>
struct student{
    int rollno=25;
    char name[50];
    char grade;
};
student s1;
int main(){
    std::cout<<s1.rollno;
    return 0;
}