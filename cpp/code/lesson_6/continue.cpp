#include <iostream>
#include <string>

int main()
{

    std::string userInput = "yes";
    std::string userName = "default";
    std::string userChoice = "none";
    while (userInput == "yes")
    {
        std::cout << "Enter your Name  : ";
        std::getline(std::cin, userName);
        std::cout << "Do you want to Correct your Name if mistakely written wrong spelling ? ";
        std::getline(std::cin, userChoice);

        if (userChoice == "yes")
        {
            continue;
        }
        else
        {
            userChoice = "none";
        }
        std::cout << "Thanks MR. " << userName << std::endl;
        std::cout << "Do you want to Greeting Again ? ";
        std::getline(std::cin, userInput);
    }

    std::cout << "Good Bye " << std::endl;

    return 0;
}