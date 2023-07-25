#ifndef __RECTANGLE_HPP_
#define __RECTANGLE_HPP_

#include "point.hpp"

class Rectangle{

private:
  Point upLeft;
  Point lowRight;

public:
  bool InitMembers(const Point &u1, const Point &r1);
  void ShowRecInfo() const;
};
#endif