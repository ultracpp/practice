#include <iostream>

class Player
{
public:
    std::string playerName;
    Player(std::string name) : playerName(name)
    {
        std::cout << "a player " << name << " created" << std::endl;
    }
};

int main()
{
    Player Virat("Virat Kohli");
    Player Rohit("Rohit Sharma");
    Player Pandya("Hardik Pandya");
    Player *Warner = new Player("David Warner");

    return 0;
}