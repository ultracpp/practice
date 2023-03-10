#include <iostream>

using namespace std;

class Train
{
private:
    bool isElectricTrain;

public:
    Train(bool electric)
    {
        isElectricTrain = electric;
    }
    void run()
    {
        if (isElectricTrain)
        {
            std::cout << "Train runs on Track through Electricity" << std::endl;
        }
        else
        {
            std::cout << "Train runs on Track through Disel" << std::endl;
        }

        std::cout << "================================================================" << std::endl;
    }
};

class ElectricTrain : public Train
{
public:
    ElectricTrain() : Train(true) {}
};

class DiselTrain : public Train
{
public:
    DiselTrain() : Train(false) {}
};

class CustomTrain : public Train
{
public:
    CustomTrain(bool userInput) : Train(userInput) {}
};

int main()
{

    ElectricTrain MahuvaBhavnagar;
    MahuvaBhavnagar.run();

    DiselTrain MahuvaDhola;
    MahuvaDhola.run();

    CustomTrain *oldTrain = new CustomTrain(false);
    oldTrain->run();

    return 0;
}