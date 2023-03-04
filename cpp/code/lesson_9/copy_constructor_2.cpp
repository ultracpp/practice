#include <iostream>

class Cricketer
{
private:
    int *totalRuns;
    std::string *playerName;

public:
    Cricketer()
    {
        std::cout << "Default Constructor" << std::endl;
    }
    Cricketer(int runs, std::string name)
    {
        std::cout << "Overloaded Constructor " << std::endl;
        totalRuns = new int;
        *totalRuns = runs;
        playerName = new std::string;
        *playerName = name;
    }
    Cricketer(const Cricketer &object)
    {
        std::cout << "Copy Constructor" << std::endl;
        totalRuns = new int;
        playerName = new std::string;

        *totalRuns = *object.totalRuns;
        *playerName = *object.playerName;
        std::cout << "================================================" << std::endl;

        std::cout << "object.totalRuns = " << object.totalRuns << std::endl;
        std::cout << "*object.totalRuns = " << *object.totalRuns << std::endl;

        std::cout << "================================================" << std::endl;
    }
    void getInfo()
    {
        std::cout << "Player Name : " << *playerName << std::endl;
        std::cout << "Total Runs : " << *totalRuns << std::endl;
    }
    ~Cricketer()
    {
        std::cout << "Deleting Allocated Memory" << std::endl;

        delete totalRuns;
        delete playerName;
    }
};

void getRun(Cricketer object)
{
    object.getInfo();
}

int main()
{

    Cricketer Virat(183, "Virat Kohli");
    getRun(Virat);

    Cricketer *Rohit = new Cricketer(264, "Rohit Sharma");
    getRun(*Rohit);

    return 0;
}