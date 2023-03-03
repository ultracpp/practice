#include <iostream>

class Cricketer
{
public:
    std::string playerName;
    Cricketer()
    {
        std::cout << "Construct Cricketer class instance through Default Constructor" << std::endl;
    }
    Cricketer(std::string name)
    {
        playerName = name;
    }
    void setName(std::string name)
    {
        playerName = name;
    }
    void getName()
    {
        std::cout << "Player Name : " << playerName << std::endl;
    }
};

int main()
{
    Cricketer Virat("Virat Kohli");
    Virat.getName();

    Cricketer *Rohit = new Cricketer("Rohit Sharma");
    (*Rohit).getName();
    delete Rohit;

    Cricketer *Pujara = new Cricketer;
    Pujara->setName("Cheteshwar Pujara");
    Pujara->getName();

    return 0;
}