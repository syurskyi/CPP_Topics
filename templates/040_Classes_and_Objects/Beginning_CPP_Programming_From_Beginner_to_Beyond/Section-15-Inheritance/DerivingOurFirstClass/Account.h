#ifndef _ACCOUNT_H_
_de.. _ACCOUNT_H_
#include <string>

class Account
{
public:
    double balance;
    std::string name;
    v.. deposit(double amount);
    v.. withdraw(double amount);
    Account();
    ~Account();
};

#endif // _ACCOUNT_H_
