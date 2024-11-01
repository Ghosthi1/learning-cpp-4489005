// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

//each have a int value assigned, encoding
enum cow_purpose {dairy, meat, hide, pet};
//STRONGLY TYPED 
enum class ahhh {meat,cow,dairy};

int main(){
    int a;
    //be is part of class ahhh
    ahhh b;

    b = ahhh::meat;

    //assigns a to the encoding of meat so 1
    a = meat;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << (int) b << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
