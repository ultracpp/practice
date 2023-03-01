#include <iostream>

void memoryRequest()
{

    unsigned short int userNumber = 0;

    std::cout << "how many integers do you want to allocated an array ? ";
    std::cin >> userNumber;

    unsigned short int *createMemoryBlocks = new unsigned short int[userNumber];

    for (unsigned short int index = 0; index < userNumber; ++index)
    {
        std::cout << "Enter number for  : " << index << " : ";
        std::cin >> *(createMemoryBlocks + index);
    }

    std::cout << "============================================" << std::endl;
    std::cout << "====== Displaying Entered Numbers ==========" << std::endl;

    for (unsigned short int index = 0; index < userNumber; ++index)
    {
        std::cout << "[" << index << "] = " << *(createMemoryBlocks + index) << std::endl;
    }

    delete[] createMemoryBlocks;
};

int main()
{
    memoryRequest();
    return 0;
}