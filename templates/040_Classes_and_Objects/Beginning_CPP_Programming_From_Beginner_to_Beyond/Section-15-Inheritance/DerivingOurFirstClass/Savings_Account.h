#ifndef _SAVINGS_ACCOUNT_H_
_de.. _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account: public Account
{
public:
    double int_rate;
    Savings_Account();
    ~Savings_Account();
    v.. deposit(double amount);
    v.. withdraw(double amount);
};

#endif // _SAVINGS_ACCOUNT_H_
