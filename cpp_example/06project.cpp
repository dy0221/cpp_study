#include "06project.h"
struct info infoList[100];
int accountCount;

void bankPro::printMenu(void){
    cout<<"-----Menu-----"<<endl;
    cout<<"1. 계좌계설"<<endl;
    cout<<"2. 입   금"<<endl;
    cout<<"3. 출   금"<<endl;
    cout<<"4. 계좌출력"<<endl;
    cout<<"5. 종   료"<<endl;
}

int bankPro::checkMenu(void){
    cout<<"선택: ";
    int number;
    cin>>number;
    cout<<""<<endl;
    return number;
}

void bankPro::openAccount(void){
    cout<<"[계좌개설]"<<endl;
    cout<<"계좌ID: ";
    cin>>infoList[accountCount].account;
    cout<<"이 름: ";
    cin>>infoList[accountCount].name;
    cout<<"입금액: ";
    cin>>infoList[accountCount].asset;
    cout<<""<<endl;
    accountCount++;
}

void bankPro::depositMoney(void){
    int tempAccount = 0;
    double tempMoney;
    cout<<"[입   금]"<<endl;
    cout<<"계좌ID: ";
    cin>>tempAccount;
    cout<<"입금액: ";
    cin>>tempMoney;

    for (int i =0 ; i<accountCount; i++){

        if (infoList[i].account != tempAccount){
            continue;
        }

        infoList[i].asset = infoList[i].asset + tempMoney;
        cout<<""<<endl;
        return ;
    }
    cout<<"계좌를 찾지 못했습니다."<<endl;
    cout<<""<<endl;
    return ;


}

void bankPro::withdrawMoney(void){
    int tempAccount = 0;
    double tempMoney;
    cout<<"[출   금]"<<endl;
    cout<<"계좌ID: ";
    cin>>tempAccount;
    cout<<"출금액: ";
    cin>>tempMoney;

    for (int i =0 ; i<accountCount; i++){

        if (infoList[i].account != tempAccount){
            continue;
        }

        infoList[i].asset = infoList[i].asset - tempMoney;
        cout<<""<<endl;
        return ;
    }
    cout<<"계좌를 찾지 못했습니다."<<endl;
    cout<<""<<endl;
    return ;
}

void bankPro::printInfo(void){
    for (int i = 0; i<accountCount; i ++){
        cout<<"계좌ID: "<<infoList[i].account<<endl;
        cout<<"이 름: "<<infoList[i].name<<endl;
        cout<<"잔 액: "<<infoList[i].asset<<endl;
        cout << "----------------" << std::endl;
    }
    cout<<"print 완료"<<endl;
    cout<<""<<endl;
    return;
}