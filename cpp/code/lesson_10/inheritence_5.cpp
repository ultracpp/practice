#include <iostream>

using namespace std;

class Cricketer
{
private:
    bool isBowler, isBatsman;

public:
    void whatCanDo()
    {
        std::cout << "Player can play Cricket" << std::endl;
    }
    void whatCanDo(bool bowler, bool batsman)
    {
        isBowler = bowler;
        isBatsman = batsman;

        if ((isBowler == true) && (isBatsman == false))
        {
            std::cout << "Player is Bowler" << std::endl;
        }
        else if ((isBowler == false) && (isBatsman == true))
        {
            std::cout << "Player is Batsman" << std::endl;
        }
        else if ((isBowler == true) && (isBatsman == true))
        {
            std::cout << "Player is Allrounder, play with Ball and Bat" << std::endl;
        }
    }
};

class Jadeja : public Cricketer
{
public:
    using Cricketer::whatCanDo;
    void whatCanDo()
    {
        std::cout << "Jadeja is Good Bowler and Batsman, he can play with bat and ball" << std::endl;
    }
};

class Rohit : public Cricketer
{
public:
    using Cricketer::whatCanDo;
    void whatCanDo()
    {
        std::cout << "Rohit sharma is the captain of indian Team, he is known as hitman" << std::endl;
    }
};

int main()
{
    Jadeja jaddu;
    jaddu.whatCanDo(true, true);

    Rohit captain;
    captain.whatCanDo(false, true);

    Cricketer Bumrah;
    Bumrah.whatCanDo(true, false);

    return 0;
}