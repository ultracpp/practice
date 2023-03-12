#include <iostream>

class Date
{
private:
    int day, month, year;

public:
    Date(int inMonth, int inDay, int inYear) : month(inMonth), day(inDay), year(inYear){}; // constructor

    Date &operator++() // prefix increment
    {
        ++day;
        return *this;
    }
    Date &operator--()
    {
        --day;
        return *this;
    }
    void displayDate()
    {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }
};

int main()
{

    Date holiday(12, 25, 2023);
    holiday.displayDate();

    return 0;
}