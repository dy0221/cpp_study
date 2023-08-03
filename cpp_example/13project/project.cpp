#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

namespace COMP_POS {
    enum {
        CLERK, SENIOR, ASSIST, MANAGER
    };
};

class NameCard {
private:
    const char* name;
    const char* company;
    const char* number;
    int job;
    const char* jobTitle; // 추가: 직급 문자열을 저장하는 멤버 변수
public:
    NameCard(const char* inputName, const char* inputCompany, const char* inputNumber, int inputJob) {
        name = new char[strlen(inputName) + 1];
        strcpy(const_cast<char*>(name), inputName);

        company = new char[strlen(inputCompany) + 1];
        strcpy(const_cast<char*>(company), inputCompany);

        number = new char[strlen(inputNumber) + 1];
        strcpy(const_cast<char*>(number), inputNumber);

        job = inputJob;

        // 직급 문자열 초기화
        switch (job) {
        case COMP_POS::CLERK:
            jobTitle = "사원";
            break;
        case COMP_POS::SENIOR:
            jobTitle = "주임";
            break;
        case COMP_POS::ASSIST:
            jobTitle = "대리";
            break;
        case COMP_POS::MANAGER:
            jobTitle = "사장";
            break;
        default:
            jobTitle = "알 수 없음";
            break;
        }
    }

    void ShowNameCardInfo() const {
        cout << "이름: " << name << endl;
        cout << "회사: " << company << endl;
        cout << "전화번호: " << number << endl;
        cout << "직급: " << jobTitle << endl; // 변경
    }

    ~NameCard() {
        delete[] name;
        delete[] company;
        delete[] number;
        cout << "delete heap space" << endl;
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
