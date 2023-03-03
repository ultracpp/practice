#include <iostream>

class Cricketer
{
public:
    std::string playerName;
    Cricketer(std::string name)
    {
        playerName = name;
    }
    std::string getName()
    {
        return playerName;
    }
};

int main()
{
    Cricketer Rohit("Rohit Sharma");
    std::cout << "Name of Indian Cricket Team One-day Captain in 2023 : " << Rohit.getName() << std::endl;

    Cricketer *Virat = new Cricketer("Virat Kohli");
    std::cout << "India's Favourite Batsman in 2023 is  : " << Virat->getName() << std::endl;

    delete Virat;

    return 0;
}