#include <iostream>

using namespace std;

class Cricketer
{

public:
    void whatCanDo()
    {
        std::cout << "Player can play Cricket" << std::endl;
    }
};

class Jadeja : public Cricketer
{
public:
    void whatCanDo()
    {
        std::cout << "Jadeja is Good Bowler and Batsman, he can play with bat and ball" << std::endl;
    }
};

class Rohit : public Cricketer
{
public:
    void whatCanDo()
    {
        std::cout << "Rohit sharma is the captain of indian Team, he is known as hitman" << std::endl;
    }
};

class Player : public Cricketer
{
public:
};

void whatCanDo(Cricketer player)
{
    // enter player object to know what he can does;
    player.whatCanDo();
}

int main()
{
    Jadeja jaddu;
    jaddu.whatCanDo();

    Rohit captain;
    captain.whatCanDo();

    whatCanDo(captain); // passing captain object

    return 0;
}