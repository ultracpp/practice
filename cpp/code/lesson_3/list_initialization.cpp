#include <iostream>

int main()
{
    unsigned short int ushort = 32;
    // signed short int sushort = {ushort};  // will not compile successully if you uncomment this line

    unsigned short int ushort1 = 32;
    signed short int sushort1 = ushort1; // compile and no error because it is not written in braces 

    return 0;
}