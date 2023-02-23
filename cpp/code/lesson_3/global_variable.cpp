#include <iostream>

unsigned short int globalVariable = 0;

void changeVariable()
{
    std::cout << "showing output from changeVariable() function" << std::endl;
    std::cout << "Global variable is :" << globalVariable << std::endl;
    std::cout << "Enter Number :";
    std::cin >> globalVariable;
    std::cout << "======================================================" << std::endl;
}

void changeValue()
{
    std::cout << "showing output from changeValue() function" << std::endl;
    std::cout << "Global variable is :" << globalVariable << std::endl;
    std::cout << "Enter Number :";
    std::cin >> globalVariable;
    std::cout << "======================================================" << std::endl;
}

int main()
{
    changeVariable();
    changeValue();
    std::cout << "Showing output from main function" << std::endl;
    std::cout << "Global variable is :" << globalVariable << std::endl;
    std::cout << "Enter Number :";
    std::cin >> globalVariable;
    std::cout << "======================================================" << std::endl;
    std::cout << "Finally Global variable is  : " << globalVariable << std::endl;

    return 0;
}