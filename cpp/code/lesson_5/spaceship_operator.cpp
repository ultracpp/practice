#include <iostream>
#include <compare>

int main()
{
    using namespace std;

    unsigned short int firstNumber = 0, secondNumber = 0;
    std::cout << "Enter First Number : ";
    std::cin >> firstNumber;
    std::cout << std::endl;
    std::cout << "Enter Second Number : ";
    std::cin >> secondNumber;

    auto comparison = (firstNumber <=> secondNumber);

    if (comparison > 0)
    {
        std::cout << "first number is greater than second number " << std::endl;
    }
    else if (comparison == 0)
    {
        std::cout << "Both Numbers are Equal" << std::endl;
    }
    else if (comparison < 0)
    {
        std::cout << "Second number is Greater than First Number" << std::endl;
    }

    return 0;
}