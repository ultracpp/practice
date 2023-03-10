#include <iostream>
#include <string>
using namespace std;

class Cricketer
{
private:
    string playerName;

public:
    void setName(string name) { playerName = name; }
    void getName() { std::cout << "Player Name : " << playerName << std::endl; }
};

class Batsman : private Cricketer
{
public:
    void setPlayerName(string userInput) { Cricketer::setName(userInput); }
    void getPlayerName() { Cricketer::getName(); }
};

int main()
{
    Batsman Rohit;
    Rohit.setPlayerName("Rohit Sharma");
    Rohit.getPlayerName();

    return 0;
}