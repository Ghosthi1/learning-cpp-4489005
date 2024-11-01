// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

// a macro script 
#define CAPACITY 5000
#define DEBUG

int main(){
    
    //a 32 bit int 
    int32_t large = CAPACITY;

#ifdef DEBUG
    std::cout << "Debug" << std::endl;
#endif

    std::cout << std::endl << std::endl;
    return (0);
}
