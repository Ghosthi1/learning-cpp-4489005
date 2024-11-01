// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    float flt;
    int32_t sgn;
    uint32_t unsgn;

    //without f it is a double
    flt = -7.66;
    sgn = flt;
    unsgn = sgn;
    
    std::cout << sgn << std::endl;
    std::cout << flt << std::endl;
    //casts the unsigned bits into sined bits 
    std::cout << (int32_t) unsgn << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
