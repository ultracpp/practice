#include <iostream>
using namespace std;

int main()
{
    std::cout << "This program helps you sum Two Numbers " << std::endl;
    unsigned short int firstNumber = 0;
    std::cout << "Enter First Number : ";
    std::cin >> firstNumber;
    std::cout << "\n";
    unsigned short int secondNumber = 0;
    std::cout << "Enter Second Number : ";
    std::cin >> secondNumber;
    std::cout << "\n";
    std::cout << "Sum of  : " << firstNumber << " + " << secondNumber << " = ";
    std::cout << (firstNumber + secondNumber) << std::endl;

    return 0;
}