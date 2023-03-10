#include <iostream>
using namespace std;

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
        std::cout << "Batsman Plays With Bat and Hitting Boundries" << std::endl;
    }
};

class Bowler : public Cricketer
{
public:
    void play()
    {
        std::cout << "Bowler Plays With Ball and make it Difficult to Play the Ball By Batsman" << std::endl;
    }
};

class AllRounder : public Batsman, public Bowler
{
public:
    void play()
    {
        std::cout << "Allrounder has Ability to make run and take wicket" << std::endl;
    }
};

int main()
{
    AllRounder *Jadeja = new AllRounder;
    Jadeja->Bowler::play();  // jadeja can play with ball
    Jadeja->Batsman::play(); // jadeja can play with bat because he is all rounder

    return 0;
}