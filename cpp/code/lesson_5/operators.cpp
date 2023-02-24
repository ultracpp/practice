#include <iostream>

int main()
{
    std::cout << "Enter Answer yes (1) or No(0) : " << std::endl;

    bool isVacation = false, goToShimlaManali = false;

    std::cout << "Do you Have Vacation : ";
    std::cin >> isVacation;

    if (isVacation)
    {
        std::cout << "Do you want to Spend your Vacation time at Shimla and Manali ? ";
    }
    else if (!isVacation)
    {
        std::cout << "on upcoming Vacation do you want to go to the Shimla and Manali ? ";
    }

    std::cin >> goToShimlaManali;

    if (isVacation && goToShimlaManali)
    {
        std::cout << "ok you are going to Shimla and Manali to spend your vacation time " << std::endl;
    }
    if (!isVacation && goToShimlaManali)
    {
        std::cout << "you should visit Shimla and Manali in your vacation time " << std::endl;
    }
    if (isVacation && !goToShimlaManali)
    {
        std::cout << "you can spend your vacarion at Home, or go elsewhere instead of shimla manali" << std::endl;
    }
    if (!isVacation && !goToShimlaManali)
    {
        std::cout << "So you have no Vacation time and you don't want to go at Shimla manali" << std::endl;
    }

    return 0;
}