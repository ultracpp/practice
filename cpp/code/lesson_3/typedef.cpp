#include <iostream>

int main()
{
    typedef bool truth;
    typedef char letter;
    typedef unsigned short int positive_short_number;
    typedef float real_number;

    truth isCppBest = true;
    letter a = 'a';
    positive_short_number latestCppStandard = 23;
    real_number gravitationalAccelerationOnEarth = 9.8;

    std::cout << "is c++ best : " << isCppBest << std::endl;
    std::cout << "letter a  = : " << a << std::endl;
    std::cout << "Latest C++ Standard = C++" << latestCppStandard << std::endl;
    std::cout << "Gravitational Acceleration on Earth : " << gravitationalAccelerationOnEarth;
    std::cout << " Meter Per Second" << std::endl;

    return 0;
}