#include <iostream>

using namespace std;
class Player
{
private:
    int *myNums;
    unsigned int length;

public:
    Player(unsigned int userInput)
    {
        length = userInput;
        std::cout << "Constructor allocates " << length << " integers" << std::endl;

        myNums = new int[length];
    }
    Player(const Player &src)
    {
        std::cout << "Copy Constructor Creating DeepCopy" << std::endl;
        length = src.length;
        myNums = new int[length];

        for (unsigned short int counter = 0; counter < length; ++counter)
        {
            *(myNums + counter) = *(src.myNums + counter);
        }
    }
    ~Player()
    {
        delete[] myNums;
    }
    void setValue(unsigned int index, int value)
    {
        if (index < length)
        {
            *(myNums + index) = value;
        }
    }
    void display()
    {
        for (unsigned int counter = 0; counter < length; ++counter)
        {
            std::cout << *(myNums + counter) << std::endl;
        }
    }
};

void copy(Player object)
{
    object.display();
}

int main()
{

    std::cout << "how many integers would you like to allocate ? ";
    unsigned int userNumber = 0;
    std::cin >> userNumber;

    Player Rohit(userNumber);

    for (unsigned int counter = 0; counter < userNumber; ++counter)
    {
        std::cout << "Enter Value for : " << counter << " : ";
        int userValue = 0;
        std::cin >> userValue;
        Rohit.setValue(counter, userValue);
    }

    std::cout << "Displaying Entered Value : " << std::endl;
    Rohit.display();

    copy(Rohit);

    return 0;
}