?i.. _CHECKING_ACCOUNT_H_
_de.. _CHECKING_ACCOUNT_H_
? ios..
? <string>
? "Account.h"

n.. Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
p..
    Checking_Account(std::string name = def_name, double balance = def_balance);    
    bool withdraw(double);
    // Inherits the Account::deposit method
};

e.. // _CHECKING_ACCOUNT_H_
