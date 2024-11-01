// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow;

    //makes a pointer
    my_cow = new cow("Hildy", 7, cow_purpose::pet);
    //uses -> to say its a pointer
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;

    //delete when done
    delete my_cow;
    
    std::cout << std::endl << std::endl;
    return (0);
}
