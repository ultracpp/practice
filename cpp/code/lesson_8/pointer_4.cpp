#include <iostream>

int main()
{

    int number1 = 100;
    int number2 = 200;

    int *const pointer = &number1;
    const int *another = &number2;

    *pointer = 200; // now number1 = 2--;
    // pointer = &number2; // not possible to change pointed address because address is assigned as const

    another = &number1; // pointed location can change
    // *another = 10; // can't change data because data is  assigned as const

    return 0;
}