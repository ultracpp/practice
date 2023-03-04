#include <iostream>

class Array
{

private:
    int *userArray;

public:
    Array(int length)
    {
        std::cout << "================== Object is Constructing====================" << std::endl;
        userArray = new int[length];
        std::cout << " Constructed An Array of Length : " << length << std::endl;
    }
    void greeting()
    {
        std::cout << "Greeting function" << std::endl;
    }

    ~Array()
    {
        std::cout << "Deleting Memory" << std::endl;
        delete userArray;
    }
};

void copyFunction(Array *object)
{
    object->greeting();
}

int main()
{

    std::cout << "How many Numbers of Element you want to allocate an array ? ";
    int userInput = 0;
    std::cin >> userInput;

    Array userArray(userInput);

    copyFunction(&userArray);

    return 0;
}