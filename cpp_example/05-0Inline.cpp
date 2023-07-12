#include<iostream>

template <typename T>
inline T SQUARE(T X){
    return X*X;
}

int main(void){
    std::cout<<SQUARE(5.1)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    std::cout<<SQUARE(-1)<<std::endl;
    return 0;
}