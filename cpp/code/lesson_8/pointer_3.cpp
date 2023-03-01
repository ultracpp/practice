#include <iostream>

int main()
{

    unsigned short int *array = new unsigned short int[4];

    array[0] = 20;
    array[1] = 40;
    array[2] = 60;
    array[3] = 80;

    std::cout << "array : " << array << std::endl;
    std::cout << "array[0] = " << *(array) << std::endl;
    std::cout << "array[1] = " << *(array + 1) << std::endl;
    std::cout << "array[2] = " << *(array + 2) << std::endl;
    std::cout << "array[3] = " << *(array + 3) << std::endl;

    return 0;
}