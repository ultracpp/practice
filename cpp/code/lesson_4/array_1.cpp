#include <iostream>

int main()
{
    const unsigned short int length = 5;
    unsigned short int myArray[length] = {1, 2, 3, 4, 5};

    for (unsigned short int index = 0; index < length; index++)
    {
        std::cout << "MyArray [" << index << "] = " << myArray[index] << std::endl;
    }
    std::cout << std::endl;
    std::cout << "sizeof unsigned short int " << sizeof(unsigned short int) << std::endl;

    for (unsigned short int index = 0; index < length; index++)
    {
        std::cout << "Address of MyArray [" << index << "] = " << &myArray[index] << std::endl;
    }

    return 0;
}