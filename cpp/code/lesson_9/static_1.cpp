#include <iostream>

class universe
{
private:
    universe(){};
    universe(const universe &object);
    const universe &operator=(const universe &);
    unsigned short int id;

public:
    static universe &create()
    {
        static universe thisUniverse;
        return thisUniverse;
    }
    void setId(int number) { id = number; }
    void getId() { std::cout << "id is  : " << id << std::endl; }
};

int main()
{
    universe &galaxies = universe::create();
    galaxies.setId(10);
    galaxies.getId();

    universe &blackhole = universe::create();
    blackhole.setId(50);
    galaxies.getId();

    return 0;
}