#include<iostream>

using std::cout;
using std::endl;

int main(void){
   int num1 = 2023;
   int &num2 = num1;

   num2 = num1 * num2;
   cout<<"num1 : "<<num1<<endl;
   cout<<"num2 : "<<num2<<endl;
   return 0;
}