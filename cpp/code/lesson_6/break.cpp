#include <iostream>
#include <string>
int main()
{
    std::string userInput = "yes";
    std::string userName = "none";
    while (true)
    {
        std::cout << "Enter Your Name : ";
        std::getline(std::cin, userName);
        std::cout << "Welcome in C++ Programming, Mr. " << userName << ", C++ is Very Easy so you should Learn it" << std::endl;
        std::cout << "Do you want to iterate Loop again ? ";
        std::getline(std::cin, userInput);

        if (userInput != "yes")
        {
            break;
        }
    }
    std::cout << "Good Bye" << std::endl;
    return 0;
}