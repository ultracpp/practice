#include <iostream>

class Cricketer
{
public:
    virtual void play() = 0;
};

class Rohit : public Cricketer
{
public:
    void play() override
    {
        std::cout << "Rohit Sharma Plays, it is hitman show" << std::endl;
    }
};

class Virat : public Cricketer
{
public:
    void play() override
    {
        std::cout << "Virat Kohli plays, he is runmachine" << std::endl;
    }
};

void play(Cricketer &player)
{
    player.play();
}

int main()
{

    Rohit hitman;
    Virat chickoo;

    play(hitman);
    play(chickoo);

    return 0;
}