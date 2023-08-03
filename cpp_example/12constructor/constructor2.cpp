#include <iostream>

using std::cout;
using std::endl;

class AAA
{
private:
  int num;

public:
  AAA() : num(0) {}
  AAA CreateInitObj(int n) // 반환 형식 변경
  {
    AAA obj(n); // 객체를 바로 생성
    return obj; // 객체를 복사해서 반환
  }
  void ShowNum() const { cout << num << endl; }
private:
  AAA(int n) : num(n) {}
};

int main(void) {
  AAA base;
  base.ShowNum();

  AAA obj1 = base.CreateInitObj(3); // 객체 복사
  obj1.ShowNum();

  AAA obj2 = base.CreateInitObj(12); // 객체 복사
  obj2.ShowNum();

  return 0;
}
