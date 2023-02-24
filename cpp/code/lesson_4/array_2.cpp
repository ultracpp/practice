#include <iostream>

int main()
{
    std::cout << "how many integers of array you want to create  ? " << std::endl;
    std::cout << "Enter Number between 0 to 20 : ";
    unsigned short int length = 0;
    std::cin >> length;

    unsigned short int myArray[length];

    if (length <= 20)
    {

        for (unsigned short int index = 0; index < length; index++)
        {
            std::cout << "Enter Value for  : " << index << " : ";
            std::cin >> myArray[index];
        }

        std::cout << "Displaying Entered Value  " << std::endl;

        for (unsigned short int index = 0; index < length; index++)
        {
            std::cout << "MyArray [" << index << "] = " << myArray[index] << std::endl;
        }
    }
    else
    {
        std::cout << "you want to Create more than 20 Elements that is not permitted" << std::endl;
    }

    return 0;
}