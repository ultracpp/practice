#include <iostream>

int main()
{
    const unsigned short int length = 5;
    unsigned short int array[length] = {1, 2, 3, 4, 5};

    for (unsigned short int index : array)
    {
        std::cout << "index : " << index << std::endl;
    }

    std::cout << "===============================================" << std::endl;

    for (auto index : {5, 4, 3, 2, 1})
    {
        std::cout << "===>" << index << std::endl;
    }

    return 0;
}