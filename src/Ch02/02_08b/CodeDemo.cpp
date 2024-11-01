// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main(){
    //constand variable of size type
    const size_t ageLength =4;
    //makes a array of ints
    int age[ageLength];
    //list with cjanging length 
    float temp[] = {31.4,24.2,34.3,22.0};

    //assigns valeus to array 
    age[0] = 25;
    age[1] = 20;
    age[2] = 40;
    age[3] = 19;

    std::cout << age[0] << std::endl;
    std::cout << age[1] << std::endl;
    std::cout << age[2] << std::endl;
    std::cout << age[3] << std::endl;

    std::cout << temp[0] << std::endl;
    std::cout << temp[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
