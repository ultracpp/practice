#include <iostream>

int main()
{
    std::string userInput = "yes";

    while (userInput == "yes")
    {
        std::cout << "Enter your Name : ";
        std::string userName = "Default";
        std::getline(std::cin, userName);
        std::cout << std::endl;
        std::cout << userName << ", Welcome in C++ Programming" << std::endl;
        std::cout << "\nDo you want to generate another greeting message ?  yes or no : ";
        std::getline(std::cin, userInput);
        std::cout << std::endl;
    }
    std::cout << "Good Bye" << std::endl;
    return 0;
}