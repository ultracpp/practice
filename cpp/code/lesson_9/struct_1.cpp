#include <iostream>

struct address
{
    std::string street;
    std::string city;
};

struct socialMedia
{
    std::string facebook;
    std::string instagram;
    std::string twitter;
    std::string email;
};

struct person
{
    std::string name;
    socialMedia account;
    address personAddress;
    void getInfo()
    {
        std::cout << "Name : " << name << std::endl;
        std::cout << "Street : " << personAddress.street << std::endl;
        std::cout << "City : " << personAddress.city << std::endl;
        std::cout << "Email : " << account.email << std::endl;
        std::cout << "Facebook : " << account.facebook << std::endl;
    }
};

int main()
{
    person user;

    user.name = "username";
    user.personAddress.street = "default street";
    user.personAddress.city = "Moscow";
    user.account.facebook = "https://facebook.com/username";
    user.account.instagram = "https://instagram.com/username";
    user.account.twitter = "https://twitter.com/username";
    user.account.email = "username@email.com";

    user.getInfo();
    return 0;
}