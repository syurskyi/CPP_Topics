?i.. _SAVINGS_ACCOUNT_H_
_de.. _SAVINGS_ACCOUNT_H_
? "Account.h"

// Savings Account is a type of Account
//   adds an interest rate
// Withdraw - same as a regular account
// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//

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
    // Inherits the Account::withdraw methods
};

e.. // _SAVINGS_ACCOUNT_H_
