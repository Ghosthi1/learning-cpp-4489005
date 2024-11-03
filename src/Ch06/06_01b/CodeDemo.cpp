// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
//INOUT OUTPUT
#include <fstream>

int main(){
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    //open file
    inFile.open("people.txt");
    //in file is to read
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
    //eof is end of file        
    while (!inFile.eof()){
            getline(inFile, str);
            std::cout << str << std::endl;
        }
        //rememeber to close file
        inFile.close();
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
