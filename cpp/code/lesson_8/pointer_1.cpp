#include <iostream>

int main()
{
    unsigned short int number = 0;
    unsigned short int *pointer = &number;

    std::cout << "variable number is located at  : " << &number << " that contains : " << number << std::endl;
    std::cout << "pointer variable's address is : " << pointer << " that contains : " << *pointer << std::endl;
    std::cout << "Variable pointer is located at  : " << &pointer << std::endl;

    return 0;
}