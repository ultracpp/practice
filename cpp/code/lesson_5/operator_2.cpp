#include <iostream>

int main()
{
    std::cout << "Reply 1 or Zero (1  = Yes and 0 = No) ;" << std::endl;

    bool firstEngineOn = false, secondEngineOn = false, isFlying = false, isLanded = true, isEngineOn = false;

    std::cout << "Enter Information About Helicopter and Reply in 0 or 1 : " << std::endl;

    std::cout << "is First Engine On : ";
    std::cin >> firstEngineOn;
    std::cout << "Is Second Engine On : ";
    std::cin >> secondEngineOn;

    if (firstEngineOn || secondEngineOn)
    {
        isEngineOn = true;
        std::cout << "is Helicpoter Flying ? ";
        std::cin >> isFlying;
        if (isFlying)
        {
            isLanded = false;
        }
    }

    std::cout << "Status of Helicopter : " << std::endl;

    if (isEngineOn)
    {
        if (firstEngineOn && secondEngineOn)
        {
            std::cout << "Both Engines are On : " << std::endl;
        }
        else if (firstEngineOn && !secondEngineOn)
        {
            std::cout << "First Engine is On, while Second engine is not on " << std::endl;
        }
        else if (!firstEngineOn && secondEngineOn)
        {
            std::cout << "Second Engine is On, First Engine is Off" << std::endl;
        }
        if (isFlying && !isLanded)
        {
            std::cout << "Helicopter is Flying" << std::endl;
        }
        else if (!isFlying && isLanded)
        {
            std::cout << "Engine is On But Helicopter is not Flying in air" << std::endl;
        }
    }
    else if (!isEngineOn)
    {
        std::cout << "Engine is Off " << std::endl;
    }
    return 0;
}