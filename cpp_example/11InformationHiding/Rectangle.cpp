#include <iostream>
#include "Rectangle.hpp"

using std::cout;
using std::endl;

bool Rectangle::InitMembers(const Point &u1, const Point &r1){
    if (u1.GetX()>r1.GetX() || u1.GetY()>r1.GetY()){
        cout<<"벗어난 값 전달"<<endl;
        return false;
    }

    upLeft=u1;
    lowRight=r1;
    return true;
}

void Rectangle::ShowRecInfo() const{
    cout<<"좌 상단: "<<'['<<upLeft.GetX()<<",";
    cout<<upLeft.GetY()<<']'<<endl;
    cout<<"우 하단: "<<'['<<lowRight.GetX()<<",";
    cout<<lowRight.GetY()<<']'<<endl;
}