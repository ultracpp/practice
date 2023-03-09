#include <iostream>

class Email
{
private:
    ~Email()
    {
        std::cout << "Deleting Account" << std::endl;
    };
    std::string emailAddress;

public:
    void get()
    {
        std::cout << "Email : " << emailAddress << std::endl;
    }
    void set(std::string mail)
    {
        emailAddress = mail;
    }
    static Email &create()
    {
        static Email account;

        return account;
    }
    static void remove(Email *account)
    {
        delete account;
    }
};

int main()
{

    Email &yandex = Email::create();
    yandex.set("username@yandex.com");
    yandex.get();

    Email *gmail = new Email;
    gmail->set("username@gmail.com");
    gmail->get();
    Email::remove(gmail);

    return 0;
}