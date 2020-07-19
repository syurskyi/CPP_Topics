?i.. _TRUST_ACCOUNT_H_
_de.. _TRUST_ACCOUNT_H_

? "Savings_Account.h"

n.. Trust_Account : pu.. Savings_Account {
    friend st. ostream &operator<<(st. ostream &os, co.. Trust_Account &account);
pr..
    st.. c_e_ co.. ch.. *def_name = "Unnamed Trust Account";
    st.. c_e_ do.. def_balance = 0.0;
    st.. c_e_ do.. def_int_rate = 0.0;
    st.. c_e_ do.. bonus_amount = 50.0;
    st.. c_e_ do.. bonus_threshold = 5000.0;
    st.. c_e_ in. max_withdrawals = 3;
    st.. c_e_ do.. max_withdraw_percent = 0.2;
pr..
    in. num_withdrawals;
p..
    Trust_Account(st. string name = def_name,  do.. balance = def_balance, do.. int_rate = def_int_rate);
    
    // Deposits of $5000.00 or more will receive $50 bonus
    bo.. deposit(do.. amount);
    
    // Only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account's value
    bo.. withdraw(do.. amount);
};

e.. // _TRUST_ACCOUNT_H_
