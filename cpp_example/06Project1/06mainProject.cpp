#include "06project.h"

using bankPro::checkMenu;
using bankPro::printMenu;
using bankPro::openAccount;
using bankPro::depositMoney;
using bankPro::withdrawMoney;
using bankPro::printInfo;

int main(void){
    while(true){bankPro::
        printMenu();
        int modeNum = checkMenu();
        switch (modeNum)
        {
        case 1:  openAccount();
            break;
        case 2:  depositMoney();
            break;
        case 3:  withdrawMoney();
            break;
        case 4:  printInfo();
            break;
        case 5:
            cout<<"finish program!"<<endl;
            return 0;
        default:
            break;
        }
    }
    return 0;
}