#include <iostream>

int main()
{
    unsigned short int number = 0;
    unsigned short int *pointer = &number;

    std::cout << "number = " << number << std::endl;
    std::cout << "Enter value : ";
    std::cin >> *pointer;
    std::cout << "number = " << number << std::endl;
    std::cout << "&number = " << &number << std::endl;
    std::cout << "pointer = " << pointer << std::endl;
    std::cout << "*pointer = " << *pointer << std::endl;

    return 0;
}