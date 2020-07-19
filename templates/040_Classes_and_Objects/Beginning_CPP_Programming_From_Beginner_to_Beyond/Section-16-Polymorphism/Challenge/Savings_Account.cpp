? "Savings_Account.h"

Savings_Account::Savings_Account(st. st..  name, do.. balance, do.. int_rate)
    : Account {name, balance}, int_rate{int_rate} {
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//
b.. Savings_Account::deposit(do.. amount) {
    amount += amount * (int_rate/100);
    r_ Account::deposit(amount);
}

st. ostream &operator__(st. ostream &os, co.. Savings_Account &account) {
    os __ "[Savings_Account: " __ account.name __ ": " __ account.balance __ ", " __ account.int_rate __ "]";
    r_ os;
}

