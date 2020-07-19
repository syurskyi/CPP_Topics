?i.. _SAVINGS_ACCOUNT_H_
_de.. _SAVINGS_ACCOUNT_H_
? "Account.h"

n.. Savings_Account: pu.. Account {
    fr.. st. ostream &operator__(st. ostream &os, co.. Savings_Account &account);
pr..
    st.. c_e_ co.. ch.. *def_name = "Unnamed Savings Account";
    st.. c_e_ do.. def_balance = 0.0;
    st.. c_e_ do.. def_int_rate = 0.0;
pr..
    do.. int_rate;
p..
    Savings_Account(st. st.. name = def_name, do.. balance =def_balance, do.. int_rate = def_int_rate);
    bo.. deposit(do.. amount);
    // Inherits the Account::withdraw method
};

e.. // _SAVINGS_ACCOUNT_H_
