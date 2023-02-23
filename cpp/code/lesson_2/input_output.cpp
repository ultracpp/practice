#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your Age :";
    unsigned short int userAge = 0;
    std::cin >> userAge;

    std::cout << "\n";
    std::cout << "Enter your Name :";
    std::string username = "";
    std::cin >> username;

    std::cout << "\n";
    std::cout << username << " is " << userAge << " Age Years OLD" << std::endl;

    return 0;
}