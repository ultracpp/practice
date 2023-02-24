#include <iostream>

int main()
{
    const unsigned short int length_1 = 3;
    const unsigned short int length_2 = 2;

    unsigned short int multiDimenssion[length_1][length_2] = {{0, 1}, {2, 3}, {4, 5}};
    std::cout << "size of multiDimenssion Array : " << sizeof(multiDimenssion) << std::endl;

    for (unsigned short int index_1 = 0; index_1 < length_1; index_1++)
    {
        for (unsigned short int index_2 = 0; index_2 < length_2; index_2++)
        {
            std::cout << "multiDimenssion [" << index_1 << "] [" << index_2 << "] = " << multiDimenssion[index_1][index_2] << std::endl;
        }
        std::cout << "========================" << std::endl;
    }

    return 0;
}