#include<iostream>
#include<string.h>

using std::cout;
using std::endl;
char * MakeStrAdr(int len){
    // char * str = (char*)malloc(sizeof(char)*len);
    char * str = new char[len];
    return str;
}

int main(void){
    char * str = MakeStrAdr(20);
    strcpy(str, "hi hahaha");
    cout<<str<<endl;
    // free(str);
    delete []str;
    return 0;
}