#include <iostream>

using namespace std;

class Shiva
{
public:
    Shiva()
    {
        std::cout << "Shiva is the Destroyer of Universe" << std::endl;
    }
};

class Vishnu : public Shiva
{
public:
    Vishnu()
    {
        std::cout << "Vishnu is controller of Universe" << std::endl;
    }
};

class Brahma : public Vishnu
{
public:
    Brahma()
    {
        std::cout << "Brahma is the Creator of Universe" << std::endl;
    }
};

int main()
{
    Brahma *creator = new Brahma;
    delete creator;

    return 0;
}