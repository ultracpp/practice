#include <iostream>
#include <string>
int main()
{
    unsigned long long int number1 = 1;
    unsigned long long int number2 = 2;

    std::string userInput = "yes";

    for (userInput; userInput != "no";)
    {
        std::cout << "Fibonaci Numbers : " << std::endl;
        std::cout << number1 << std::endl;
        std::cout << number2 << std::endl;

        unsigned long long int number3 = number1 + number2;
        unsigned long long int temp = number2;

        number1 = temp;
        number2 = number3;

        std::cout << "=======================" << std::endl;
        std::cout << "Do you want to get More Fibonaci Number ? : ";
        std::getline(std::cin, userInput);
    }
}