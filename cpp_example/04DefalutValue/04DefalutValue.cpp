#include<iostream>

int BoxVolume(int num1= 1, int num2 = 1, int num3 = 1);

int main(void){
    std::cout<<"[3, 3, 3] : "<<BoxVolume(3, 3, 3)<<std::endl;
    std::cout<<"[5, 5, D] : "<<BoxVolume(5, 5)<<std::endl;
    std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
    std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;
}

int BoxVolume(int num1, int num2, int num3){
    return num1*num2*num3;
}