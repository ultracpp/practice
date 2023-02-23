#include <iostream>

constexpr unsigned short int number_seven()
{
    return 7;
}

constexpr unsigned short int sum_of_two(unsigned short number1, unsigned short number2)
{
    return number1 + number2;
}

int main()
{
    const unsigned short int seven = 7;

    std::cout << "const seven = " << seven << std::endl;
    std::cout << "constexpr number_seven() = " << number_seven() << std::endl;
    std::cout << "sum of 5 + 8 = " << sum_of_two(5, 8) << std::endl;

    return 0;
}