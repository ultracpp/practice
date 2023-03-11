#include <iostream>
using namespace std;
class Cricketer
{
public:
    Cricketer()
    {
        std::cout << "Cricketer Constructed" << std::endl;
    }

    int number;
};

class Batsman : public virtual Cricketer
{
};
class Bowler : public virtual Cricketer
{
};
class Fielder : public virtual Cricketer
{
};

class Jadeja : public Batsman, public Bowler, public Fielder
{
};

int main()
{
    Jadeja jaddu;
    jaddu.number = 7;

    std::cout << "Jadeja Plays At Number : " << jaddu.number << std::endl;

    return 0;
}