// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){

    int a  =1023;
    bool flag = false;
    char lttr = 'd';

    if(a >1000){
        std::cout << "Warning: a is o ver 1000" << std::endl;
    }

    //comaprison opreator 0 =false
    if(a % 2){
        std::cout << "a is odd" << std::endl;
    }
    else{
        std::cout << "a is even" << std::endl;
    }

    std::cout << "The letter " << lttr<< "is ";
    if (lttr != 'a' && lttr != 'e' && lttr != 'o'){
        std::cout << "not ";
    }
    std::cout << "A vowel " << std::endl;


    
    std::cout << std::endl << std::endl;
    return (0);
}
