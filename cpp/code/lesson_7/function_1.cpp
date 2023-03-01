#include <iostream>
#include <string>

inline void calculateDistance(unsigned short int time)
{
    const unsigned long int lightSpeed = 300000; // in one Second Light Travels 300000 KM

    std::cout << "in " << time << " Second, Light Travels : " << time * lightSpeed << " Kelometer" << std::endl;
}

int main()
{

    calculateDistance(5);
    calculateDistance(10);
    calculateDistance(1);

    return 0;
}