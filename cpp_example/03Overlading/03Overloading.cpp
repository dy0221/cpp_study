#include <iostream>
void swap(int* val1, int* val2){
    int temp;
    temp = *val2;
    *val2 = *val1;
    *val1 = temp;
    return ;
}
void swap(char* val1, char* val2){
    char temp;
    temp = *val2;
    *val2 = *val1;
    *val1 = temp;
    return ;
}
void swap(double* val1, double* val2){
    double temp;
    temp = *val2;
    *val2 = *val1;
    *val1 = temp;
    return ;
}

int main(void){
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout<<num1<<' '<<num2<<std::endl;

    char ch1='A', ch2='Z';
    swap(&ch1,&ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;    

    double db1 = 1.111, db2=5.555;
    swap(&db1,&db2);
    std::cout<<db1<<' '<<db2<<std::endl;
    
    return 0;
}