// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    //created a string called str 
    std::string str;
    //askes the user for there name
    //flush waits till current line is finished
    std::cout << "Please enter your name" << std::flush;
    //gets a user input and stores it in str
    std::cin >> str;
    //prints str
    std::cout << "your name is " << str << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
