#include <iostream>

class Player
{
private:
    unsigned short int *number;

public:
    Player(unsigned short int userInput) // overloaded constructor
    {
        std::cout << "===============================================" << std::endl;

        number = new unsigned short int;
        *number = userInput;
        std::cout << "Overloaded Constructor" << std::endl;
        std::cout << "number from parameter is   : " << userInput << " and path of number is = " << number << std::endl;
        std::cout << "===============================================" << std::endl;
    }
    Player(const Player &obj)
    {
        std::cout << "===============================================" << std::endl;

        std::cout << "Copy Constructor" << std::endl;
        std::cout << "Path of Object Parameter = " << &obj << std::endl;
        std::cout << "Path obj.number = " << obj.number << std::endl;
        std::cout << "Path of number of class = " << number << std::endl;
        std::cout << "===============================================" << std::endl;

        number = new unsigned short int;
        *number = *obj.number;
        std::cout << "Path of number of class = " << number << std::endl;
    }
    void getPath()
    {
        std::cout << "===============================================" << std::endl;

        std::cout << "Path of Number in getPath Function = " << number << std::endl;

        std::cout << "===============================================" << std::endl;
    }
    ~Player()
    {
        delete number;
    }
};

void userObject(Player object)
{
    std::cout << "userObject Function , Object Path = " << &object << std::endl;
    object.getPath();
}

int main()
{

    Player *Rohit = new Player(100);
    userObject(*Rohit);

    return 0;
}