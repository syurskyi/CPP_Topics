?i.. _SAVINGS_ACCOUNT_H_
_de.. _SAVINGS_ACCOUNT_H_
? "Account.h"

n.. Savings_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
p..
    Savings_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);    
    v.. bool deposit(double amount) override;
    v.. bool withdraw(double amount) override;
    v.. v.. print(std::ostream &os) const override;
    v.. ~Savings_Account() = default;
};

e.. // _SAVINGS_ACCOUNT_H_
