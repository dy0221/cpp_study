#include<iostream>
using std::cout;
using std::endl;

struct Point{
    int xpos;
    int ypos;

    void MovePos(int x, int y){
        xpos = xpos + x;
        ypos = ypos + y;
        return;
    }

    void AddPoint(const Point &pos){
        xpos = xpos + pos.xpos;
        ypos = ypos + pos.ypos;
        return;
    }

    void ShowPosition(){
        cout<<"["<<xpos<<" ,"<<ypos<<"]"<<endl;
        return;
    }
};

int main(void){
    Point pos1 = {12, 4};
    Point pos2 = {20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowPosition();

    pos1.AddPoint(pos2);
    pos1.ShowPosition();

    return 0;
}
