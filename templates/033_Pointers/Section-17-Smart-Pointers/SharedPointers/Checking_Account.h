?i.. _CHECKING_ACCOUNT_H_
_de.. _CHECKING_ACCOUNT_H_
? ios..
? <string>
? "Account.h"

n.. Checking_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
p..
    Checking_Account(std::string name = def_name, double balance = def_balance);    
    v.. bool withdraw(double) override;
    v.. bool deposit(double) override;
    v.. v.. print(std::ostream &os) const override;
    v.. ~Checking_Account() = default;
};

e.. // _CHECKING_ACCOUNT_H_
