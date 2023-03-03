#include <iostream>

void multipication(const int *numbers, int *variable)
{
    *variable = (*numbers) * (*numbers);
}

int main()
{
    int userInput = 0;
    int result = 0;
    std::cout << "Enter Value  : ";
    std::cin >> userInput;
    multipication(&userInput, &result);
    std::cout << "result : " << result << std::endl;

    return 0;
}

/*

int data_1  = 100;
int data_2 = 200;
int data_3 = 300;

int *const ptr1 = &data_1;
const int *ptr2 = &data_2;
const int const *ptr3 = &data_3;

(1) ==> ptr_1 = &data_2 = failed, because pointer address is constant so the data can be changed but address can't be changed
(2) ==> *ptr_1 = 150; = yes, data can be changed

(1)==> ptr_2 = &data_1; = true, pointer can change the address but can't change data because data is constant
(2)==> ptr_2 = 100; = failed to change data


in third pointer, data and address are both constant so this pointer can't change data and address

*/