#include <iostream>

int main()
{
    unsigned short int number = 10;
    unsigned short int dynamic = 0; // initial value
    std::cout << "variable number is stored at location : " << &number << " that contains  " << number << std::endl;

    std::cout << "variable dynamic is stored at location : " << &dynamic << " that contains  " << dynamic << std::endl;
    std::cout << "Enter value in dynamic variable : ";
    std::cin >> dynamic;
    std::cout << "variable dynamic is stored at location : " << &dynamic << " that contains  " << dynamic << std::endl;

    return 0;
}