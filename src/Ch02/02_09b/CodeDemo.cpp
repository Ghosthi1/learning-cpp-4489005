// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    //making strings with characters 
    const size_t length = 25;
    char array_Str1[length] = "Hey guys!";
    char array_Str2[] = "wharts up";
    
    std::string std_str1 = "adada";
    std::string std_str2 = "baaa";

    strncat(array_Str1, array_Str2, length);
    std::cout << array_Str1 + std_str1<< std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
