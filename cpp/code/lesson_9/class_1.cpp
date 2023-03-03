#include <iostream>

class Cricketer
{
public:
    std::string playerName;

    void setName(std::string name) { playerName = name; }
    void getName() { std::cout << "Player Name : " << playerName << std::endl; }
};

int main()
{
    Cricketer virat;
    virat.setName("Virat Kohli");
    virat.getName();

    Cricketer *rohit = new Cricketer;
    rohit->setName("Rohit Sharma");
    rohit->getName();
    delete rohit;

    Cricketer *pandya = new Cricketer;
    (*pandya).setName("Hardik Pandya");
    (*pandya).getName();
    delete pandya;
    
    return 0;
}