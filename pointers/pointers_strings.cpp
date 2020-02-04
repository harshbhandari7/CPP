using namespace std;
#include<iostream>
int main(){
    char name[]="String";
    char *cptr;
    //char *cptr="String";
    for(cptr=name;cptr != "\0";cptr++){
        cout<<*cptr;
    }

    //instead of using character array using char pointer memory efficient
    // but in c++ we have to use const char *cptr; con is we can't modify string at later stage.
}