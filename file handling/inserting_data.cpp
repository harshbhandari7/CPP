using namespace std;
#include<fstream>
#include<iostream>
int main(){
    char ans='y',grade;
    float marks;

    ofstream file_obj;                       //output stream object created.
    file_obj.open("Marks.txt",ios::out);    //file opened, here it will create the file named as Marks.txt

    while(ans=='y' or  ans=='Y'){
        cout<<"Enter marks\n";
        cin>>marks;
        cout<<"Enter Grade\n";
        cin>>grade;
        file_obj<<"Marks is "<<marks<<"\n"<<"Grade is "<<grade<<"\n";
        cout<<"want to enter more press y or Y\n";
        cin>>ans;
    }
    file_obj.close();
    return 0;
}