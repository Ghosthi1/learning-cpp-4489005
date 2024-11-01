// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

//glolbal variables
int a ,b = 5;

int main(){
    //local variable
    bool myFlag;

    a = 7;
    myFlag = false;

    std::cout << "Hi There!" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "flag = " << myFlag << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
