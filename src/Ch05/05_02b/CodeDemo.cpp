// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

#include <iostream>

// typical function
int Square(int x){
    return x*x;
}

//using pointers 
void Swap (int *x, int *y){
    int temp = *x;
    *x = *y;
    *y =temp;
}

//by refrence 
void Swap(int& x, int&y){
    int temp = x;
    x=y;
    y =temp;
}

int main(){
    int a = 9, b;
    // TODO: square
    b = Square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // TODO: swap
    Swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // TODO: swap
    Swap(a,b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
