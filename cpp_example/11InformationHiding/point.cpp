#include <iostream>
#include "point.hpp"

using std::cout;
using std::endl;

bool Point::InitMembers(int xpos, int ypos){
    if (xpos < 0 || ypos < 0){
        cout<<"벗어난 값 전달"<<endl;
        return false;
    }

    x = xpos;
    y = ypos;
    return true;
}

int Point::GetX() const{
    return x;
}

int Point::GetY() const{
    return y;
}

bool Point::SetX(int xpos){
    if (xpos < 0 || xpos < 0){
        cout<<"벗어난 값 전달"<<endl;
        return false;
    }
    x=xpos;
    return true;
}

bool Point::SetY(int ypos){
    if (ypos < 0 || ypos < 0){
        cout<<"벗어난 값 전달"<<endl;
        return false;
    }
    y=ypos;
    return true;
}

