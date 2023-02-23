#include <iostream>

int main()
{
    std::cout << "==========================================================" << std::endl;

    std::cout << "size of int (8 BIT) = " << sizeof(int8_t) << std::endl;
    std::cout << "size of int (16 BIT) = " << sizeof(int16_t) << std::endl;
    std::cout << "size of int (32 BIT) = " << sizeof(int32_t) << std::endl;
    std::cout << "size of int (64 BIT) = " << sizeof(int64_t) << std::endl;

    std::cout << "==========================================================" << std::endl;

    std::cout << "size of unsigned short int  : " << sizeof(unsigned short int) << std::endl;
    std::cout << "size of long int : " << sizeof(long int) << std::endl;
    std::cout << "size of long long int : " << sizeof(long long int) << std::endl;
    std::cout << "size of float : " << sizeof(float) << std::endl;
    std::cout << "size of double : " << sizeof(double) << std::endl;
    std::cout << "==========================================================" << std::endl;

    std::cout << "size of char : " << sizeof(char) << std::endl;
    std::cout << "size of bool : " << sizeof(bool) << std::endl;
    std::cout << "==========================================================" << std::endl;

    return 0;
}