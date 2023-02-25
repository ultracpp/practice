#include <iostream>

bool isEngineOn = false, isFanOn = false, isPilotWithinHelicopter = false, isHelicopterFlying = false, isEnoughFuel = true;

void helicopter()
{
    std::cout << "Enter yes or No " << std::endl;
    std::string answer = "default";

    std::cout << "is Engine of Helicopter on ? ";
    std::cin >> answer;

    if (answer == "yes" || answer == "YES" || answer == "Yes")
    {
        isEngineOn = true;
    }
    answer = "default";

    std::cout << "is Helicopter's Fan On ? :";
    std::cin >> answer;

    if (answer == "yes" || answer == "YES" || answer == "Yes")
    {
        isFanOn = true;
    }
    answer = "default";

    std::cout << "is Pilot inside Helicopter ? : ";
    std::cin >> answer;

    if (answer == "yes" || answer == "YES" || answer == "Yes")
    {
        isPilotWithinHelicopter = true;
    }
    answer = "default";

    std::cout << "Does Helicopter Have Enough Fuel ? ";
    std::cin >> answer;

    if (answer == "yes" || answer == "YES" || answer == "Yes")
    {
        isEnoughFuel = true;
    }
    answer = "defalut";

    if (isEngineOn && isFanOn && isPilotWithinHelicopter && isEnoughFuel)
    {
        std::cout << "is Helicopter Flying ? ";
        std::cin >> answer;
        if (answer == "yes" || answer == "YES" || answer == "Yes")
        {
            isHelicopterFlying = true;
        }
    }

    if (isEngineOn && isFanOn && isPilotWithinHelicopter && isEngineOn && isHelicopterFlying)
    {
        std::cout << "Helicopter is Flying in Air" << std::endl;
    }
    else
    {
        if (isEngineOn)
        {
            std::cout << "Engine is On" << std::endl;
        }
        else
        {
            std::cout << "Engine is Off" << std::endl;
            isFanOn = false;
        }

        if (isEngineOn && isFanOn)
        {
            std::cout << "Fan On " << std::endl;
        }
        else
        {
            std::cout << "Fan Off" << std::endl;
            isHelicopterFlying = false;
        }
        if (isPilotWithinHelicopter)
        {
            std::cout << "Pilot is in Helicopter" << std::endl;
        }
        else
        {
            std::cout << "Pilot is not in Helicopter" << std::endl;
            isHelicopterFlying = false;
        }
        if (isEnoughFuel)
        {
            std::cout << "Fuel is Enough to Fly" << std::endl;
        }
        else
        {
            std::cout << "Fuel is not Enough" << std::endl;
            isHelicopterFlying = false;
        }
        if (isHelicopterFlying)
        {
            std::cout << "Helicopter is Flying" << std::endl;
        }
        else
        {
            std::cout << "Helicopter is not Flying Because" << std::endl;

            if (!isEngineOn)
            {
                std::cout << "Engine is off" << std::endl;
            }
            else if (!isFanOn)
            {
                std::cout << "Fan is Off" << std::endl;
            }
            else if (!isPilotWithinHelicopter)
            {
                std::cout << "Pilot is not in Helicopter" << std::endl;
            }
            else if (!isEnoughFuel)
            {
                std::cout << "Fueld is not enough to fly Helicopter" << std::endl;
            }
            else if (!isHelicopterFlying)
            {
                std::cout << "Everything seems ok. Pilot can Fly Helicopter" << std::endl;
            }
        }
    }
}

int main()
{
    helicopter();

    return 0;
}