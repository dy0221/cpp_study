#include<iostream>
#include "Rectangle.hpp"

using std::cout;
using std::endl;

int main(void){
    Point pos1;
    if(!pos1.InitMembers(-2,4))
        cout<<"초기화 실패"<<endl;
    if(!pos1.InitMembers(2,4))
        cout<<"초기화 실패"<<endl;

    Point pos2;
    if(!pos2.InitMembers(5,9))
        cout<<"초기화 실패"<<endl;

    Rectangle rec;
    if(!rec.InitMembers(pos2,pos1))
        cout<<"초기화 실패"<<endl;

    if(!rec.InitMembers(pos1,pos2))
        cout<<"초기화 실패"<<endl;
    rec.ShowRecInfo();
    return 0;

}