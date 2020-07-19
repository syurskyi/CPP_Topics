?i.. _SAVINGS_ACCOUNT_H_
_de.. _SAVINGS_ACCOUNT_H_
? "Account.h"

n.. Savings_Account: pu.. Account {
pr..
    st.. c_e_ co.. ch.. *def_name = "Unnamed Savings Account";
    st.. c_e_ do.. def_balance = 0.0;
    st.. c_e_ do.. def_int_rate = 0.0;
pr..
    do.. int_rate;
p..
    Savings_Account(st. st.. name = def_name, do.. balance =def_balance, do.. int_rate = def_int_rate);
    v.. bo.. deposit(do.. amount) ov..
    v.. bo.. withdraw(do.. amount) ov..
    v.. v.. print(st. ostream &os) co.. ov..

    v.. ~Savings_Account() = de..
};

e.. // _SAVINGS_ACCOUNT_H_
