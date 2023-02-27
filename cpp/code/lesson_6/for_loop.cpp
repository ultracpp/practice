#include <iostream>

int main()
{
    const unsigned short int length = 5;
    unsigned short int array[length];
    std::cout << "Initialized an Array of 5 Integers" << std::endl;

    for (unsigned short int index = 0; index < length; index++)
    {
        std::cout << "Enter Value for : " << index << " : ";
        std::cin >> array[index];
        std::cout << std::endl;
    }

    std::cout << "Fetching Array Data =======================" << std::endl;
    for (unsigned short int index = 0; index < length; index++)
    {
        std::cout << "array [" << index << "] = " << array[index] << std::endl;
    }

    return 0;
}