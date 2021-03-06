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

b.. Savings_Account::withdraw(do.. amount) {
    r_ Account::withdraw(amount);
}

v.. Savings_Account::print(st. ostream &os) co.. {
    os.precision(2);
    os __ st. fixed;
    os __ "[Savings_Account: " __ name __ ": " __ balance __ ", " __ int_rate __ "]";
}
