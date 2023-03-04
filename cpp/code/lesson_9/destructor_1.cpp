#include <iostream>

class Player
{
private:
    int *runs;

public:
    Player(int number)
    {
        runs = new int;
        *runs = number;
        std::cout << "Runs is  : " << *runs << std::endl;
    }

    ~Player()
    {
        std::cout << "Deleted Allocated Memory" << std::endl;
        delete runs;
    }
};

int main()
{

    Player Rohit(264);
    Player *Virat = new Player(183);
    delete Virat;
    return 0;
}