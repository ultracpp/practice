#include <iostream>

class Person
{
private:
    unsigned short int *numberList;
    int length;

public:
    Person(int len)
    {
        length = len;
        numberList = new unsigned short int[length];
    }
    Person(const Person &object) // copy Constructor
    {
        std::cout << "Copy constructor called" << std::endl;
        length = object.length;
        numberList = new unsigned short int[length];

        for (unsigned short int i = 0; i < length; ++i)
        {
            *(numberList + i) = *(object.numberList + i);
        }
    }
    void enterNames(unsigned short int index)
    {
        if (index < length)
        {
            unsigned short int userNumber = 0;
            std::cout << "Enter Number  " << index << " : ";
            std::cin >> userNumber;
            *(numberList + index) = userNumber;
        }
    }
    void display()
    {
        for (int counter = 0; counter < length; ++counter)
        {
            std::cout << "[" << counter << "] = " << *(numberList + counter) << std::endl;
        }
    }

    ~Person()
    {
        delete numberList;
    }
};

Person duplicate(Person &obj)
{
    Person instance(obj);
    return instance;
}

void copyFunction(Person obj)
{
    std::cout << "Passed Person Object through function" << std::endl;
    obj.display();
}

int main()
{
    std::cout << "How Many friends names do you want to insert into array ? ";
    int inputNumber = 0;
    std::cin >> inputNumber;
    std::cout << "Creating Array of  : " << inputNumber << " elemetns : " << std::endl;

    Person number(inputNumber);

    for (unsigned int counter = 0; counter < inputNumber; ++counter)
    {
        number.enterNames(counter);
    }

    Person x(duplicate(number));
    x.display();

    return 0;
}