using namespace std;
#include<iostream>
#include<fstream>
int main(){
    //float marks;
    //char grade;
    string s;
    ifstream obj;
    obj.open("Marks.txt",ios::in);
    if(!obj){
        cout<<"Unable to open file";
        exit(1); 
     }
    while(obj>>s){
        cout<<s<<"\n";
    }
    obj.close();
    return 0;
}