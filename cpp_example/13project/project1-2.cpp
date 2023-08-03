
// const_cast<char*>를 이용하여 순간적으로 상수성을 없애는 것은 예기치 못한 문제를 발생시킬 수 있는 위험한 일이다.
// 따라서 c++은 string이라는 라이브러리을 통해 조금더 안전하게 관리할 수 있다.

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

namespace COMP_POS {
    enum {
        CLERK, SENIOR, ASSIST, MANAGER
    };
};

class NameCard {
private:
    string name;
    string company;
    string number;
    int job;
public:
    NameCard(const char* inputName, const char* inputCompany, const char* inputNumber, int inputJob)
        : name(inputName), company(inputCompany), number(inputNumber), job(inputJob) {}

    void ShowNameCardInfo() const {
        cout << "이름: " << name << endl;
        cout << "회사: " << company << endl;
        cout << "전화번호: " << number << endl;
        switch (job) {
        case COMP_POS::CLERK:
            cout << "직급: 사원" << endl;
            break;
        case COMP_POS::SENIOR:
            cout << "직급: 주임" << endl;
            break;
        case COMP_POS::ASSIST:
            cout << "직급: 대리" << endl;
            break;
        case COMP_POS::MANAGER:
            cout << "직급: 사장" << endl;
            break;
        default:
            break;
        }
    }
};

int main(void) {
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSenior("Hong", "OrnageEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();

    return 0;
}
