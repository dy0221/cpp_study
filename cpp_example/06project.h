#ifndef bankerProgram
#define bankerProgram

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

namespace bankPro {
    int checkMenu();
    void printMenu();
    void openAccount();
    void depositMoney();
    void withdrawMoney();
    void printInfo();
}

struct info {
    char name[20];
    int account;
    double asset;
};


extern struct info infoList[100];
extern int accountCount;

#endif
