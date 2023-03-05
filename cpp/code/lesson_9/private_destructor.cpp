#include <iostream>

class EmailAccount
{
private:
    ~EmailAccount()
    {
        std::cout << "Deleted email Account" << std::endl;
    };
    std::string mail;

public:
    void getMail()
    {
        std::cout << "Mail  : " << mail << std::endl;
    }
    void setMail(std::string address)
    {
        mail = address;
    }
    static void remove(EmailAccount *account)
    {
        delete account;
    }
};

int main()
{
    EmailAccount *yandex = new EmailAccount;
    yandex->setMail("username@yandex.com");
    yandex->getMail();
    EmailAccount::remove(yandex);

    return 0;
}