?i.. _CHECKING_ACCOUNT_H_
_de.. _CHECKING_ACCOUNT_H_
? ios..
? str..
? "Account.h"

n.. Checking_Account: pu.. Account {
    friend st. ostream &operator<<(st. ostream &os, co.. Checking_Account &account);
pr..
    st.. c_e_ co.. ch.. *def_name = "Unnamed Checking Account";
    st.. c_e_ do.. def_balance = 0.0;
    st.. c_e_ do.. per_check_fee = 1.5;
p..
    Checking_Account(st. string name = def_name, do.. balance = def_balance);
    v.. bo.. withdraw(do..) ov..
    v.. bo.. deposit(do..) ov..
    v.. ~Checking_Account() = de..
};

e.. // _CHECKING_ACCOUNT_H_
