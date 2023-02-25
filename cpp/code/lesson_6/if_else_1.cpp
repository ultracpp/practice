#include <iostream>
#include <string>
int main()
{
    bool isMarried = false, isSingle = false;

    std::cout << "Enter Yes or No : " << std::endl;
    std::string answer = "default";
    std::cout << "Are you Married ? ";
    std::cin >> answer;

    if (answer == "yes" || answer == "Yes" || answer == "YES")
    {
        isMarried = true;
    }

    answer = "default";
    std::cout << std::endl;
    std::cout << "Are you Single : ";
    std::cin >> answer;

    if (answer == "yes" || answer == "Yes" || answer == "YES")
    {
        isSingle = true;
    }

    if (isMarried && !isSingle)
    {
        std::cout << "Ok, you are Married" << std::endl;
    }
    else if (!isMarried && isSingle)
    {
        std::cout << "You are Single. Good ... " << std::endl;
    }
    else if (!isMarried && !isSingle || isSingle && isMarried)
    {
        std::cout << "You are Speaking Lie, you can't be Married and Single at same time " << std::endl;
    }

    return 0;
}