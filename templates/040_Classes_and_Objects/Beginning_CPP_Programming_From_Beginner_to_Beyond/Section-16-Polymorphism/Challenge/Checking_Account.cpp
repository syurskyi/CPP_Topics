? "Checking_Account.h"

Checking_Account::Checking_Account(st. st..  name, do.. balance)
    : Account {name, balance} {
}

b.. Checking_Account::withdraw(do.. amount) {
    amount += per_check_fee;
    r_ Account::withdraw(amount);
}

st. ostream &operator__(st. ostream &os, co.. Checking_Account &account) {
    os __ "[Checking_Account: " __ account.name __ ": " __ account.balance  __ "]";
    r_ os;
}

