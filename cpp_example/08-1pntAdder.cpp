#include<iostream>

using std::cout;
using std::endl;

typedef struct __Point
{
    int xpos;
    int ypos;
}Point;

Point& PntAdder(const Point &pnt1, const Point &pnt2){
    Point * pnt  = new Point;
    pnt->xpos = pnt1.xpos + pnt2.xpos;
    pnt->ypos = pnt1.ypos + pnt2.ypos;
    return *pnt;
}
int main(void){

    Point * p1 = new Point;
    Point * p2 = new Point;
    p1 -> xpos = 10;
    p1 -> ypos = 20;
    p2 -> xpos = 30;
    p2 -> ypos = 40;

    Point & pnt = PntAdder(*p1, *p2);
    cout<<"x : "<<pnt.xpos<<" y : "<< pnt.ypos<<endl;
    delete p1;
    delete p2;
    delete &pnt;
    return 0;
}