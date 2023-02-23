#include <iostream>

int showOutput(); // declare function

int main()
{
    showOutput(); // invoke the function

    return 0;
}

int showOutput() // define declared function
{
    std::cout << "This is showOutput(); function invoked in main" << std::endl;

    std::cout << "sum of 5 + 10 = " << (5 + 10) << std::endl;
    std::cout << "Abstraction of 10 - 5 = " << (10 - 5) << std::endl;
    std::cout << "Multipication of 10 * 5 = " << (10 * 5) << std::endl;
    std::cout << "Division of 10 / 4 = " << (10 / 4) << std::endl;
    std::cout << "Division of 10 / 4.0 = " << (10 / 4.0) << std::endl;

    return 0;
}