#include <iostream>

int main()
{
    unsigned short int latestCppStandard = 23;
    signed short int tempratureOfAntarctica = -45;
    float gravitationalAccelerationOnEarth = 9.8;
    double gravitationalAccelerationOnOtherPlanet = 0.00054454;
    char myGrade = 'a';
    bool isJupiterBiggestPlanetInSolarSystem = true;

    std::cout << "latest C++ Standard : C++" << latestCppStandard << std::endl;
    std::cout << "Temprature in Antracitca : " << tempratureOfAntarctica << std::endl;
    std::cout << "Gravitational Acceleration on Earth is  : " << gravitationalAccelerationOnEarth << " Meter Per Second" << std::endl;

    std::cout << "Gravitational Acceleration on Other Planet is : " << gravitationalAccelerationOnOtherPlanet << std::endl;

    std::cout << "My Grade is : " << myGrade << std::endl;
    std::cout << "is Jupiter Biggest planet in solar system ? : " << (isJupiterBiggestPlanetInSolarSystem ? "YES" : "NO") << std::endl;

    return 0;
}