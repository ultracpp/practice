#include <iostream>

class Cricketer
{
public:
    void play()
    {
        std::cout << "Cricketer Plays Cricket" << std::endl;
    }
};

class Batsman : public Cricketer
{
public:
    void play()
    {
        std::cout << "Batsman Plays with Bat" << std::endl;
    }
};

class Bowler : public Cricketer
{
public:
    void play()
    {
        std::cout << "Bowler plays with ball" << std::endl;
    }
};

class Fielder : public Cricketer
{
public:
    void play()
    {
        std::cout << "Fielder plays Cricket" << std::endl;
    }
};

class Allrounder final : public Batsman, public Bowler, public Fielder
{
public:
    void play()
    {
        Batsman::play();
        Bowler::play();
        Fielder::play();
    }
};

/*
// jadeja class can't be inherited from Allrounder because Allrounder class is declarated as final

class Jadeja : public Allrounder
{
};

*/

int main()
{
    Allrounder Jadeja;
    Jadeja.play();

    return 0;
}