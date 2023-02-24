#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned short int> dynamic(1, 0); //

    std::cout << "size of dynamic array is  : " << dynamic.size() << std::endl;
    std::cout << "first Element of Array is  : " << dynamic.front() << std::endl;
    std::cout << "Last Element of an array : " << dynamic.at(dynamic.size() - 1) << std::endl;
    std::cout << "Enter your manual number : ";
    unsigned short int inputNumber = 0;
    std::cin >> inputNumber;
    dynamic.push_back(inputNumber);
    std::cout << "=================================================================" << std::endl;
    std::cout << "size of dynamic array is  : " << dynamic.size() << std::endl;
    std::cout << "first Element of Array is  : " << dynamic.front() << std::endl;
    std::cout << "Last Element of an array : " << dynamic.at(dynamic.size() - 1) << std::endl;

    std::cout << "Enter Number Again : ";
    std::cin >> inputNumber;
    dynamic.push_back(inputNumber);

    std::cout << "=================================================================" << std::endl;
    std::cout << "size of dynamic array is  : " << dynamic.size() << std::endl;
    std::cout << "first Element of Array is  : " << dynamic.front() << std::endl;
    std::cout << "Last Element of an array : " << dynamic.at(dynamic.size() - 1) << std::endl;

    return 0;
}