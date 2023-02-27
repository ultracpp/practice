#include <iostream>

int main()
{
    enum continent
    {
        asia = 1,
        africa,
        northAmerica,
        europe,
        latinAmerica,
        australia,
        antarctica
    };

start:

    std::cout << "Enter number between 1 to 7 to know the continent number :  ";
    unsigned short int userInput = 0;
    std::cin >> userInput;

    switch (userInput)
    {
    case asia:
        std::cout << "Asia is your continent, it is biggest" << std::endl;
        break;
    case africa:
        std::cout << "Africa is second Largest continent" << std::endl;
        break;
    case northAmerica:
        std::cout << "North America mainly known for Canada and USA" << std::endl;
        break;
    case europe:
        std::cout << "Europe is most developed continent, most of countries are developed" << std::endl;
        break;
    case latinAmerica:
        std::cout << "Latin America is called the forst of Earth, because Amazon forest and amazon rivers are located in this continent, Brazil is biggest country here" << std::endl;
        break;
    case australia:
        std::cout << "Australia is smallest continent in the world" << std::endl;
        break;
    case antarctica:
        std::cout << "you will meet penguin at antarctica, coldest continent on earth" << std::endl;
        break;
    default:
        std::cout << "Run Program Again, there is only 7 continent, 8th continent is under water of ocean called zelandia" << std::endl;
        goto start;
        break;
    }

    return 0;
}