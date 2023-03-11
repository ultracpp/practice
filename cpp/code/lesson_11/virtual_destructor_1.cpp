#include <iostream>
using namespace std;

class Player
{
public:
    Player() { cout << "Constructing Player" << endl; }
    virtual ~Player() { cout << "Deleting Player" << endl; }
};

class Captain : public Player
{
public:
    Captain()
    {
        cout << "Constructing Captain" << endl;
    }
    ~Captain()
    {
        cout << "Deleting Captain" << endl;
    }
};

void remove(Player *who)
{
    delete who;
}

int main()
{
    Captain *Rohit = new Captain;
    remove(Rohit);

    return 0;
}