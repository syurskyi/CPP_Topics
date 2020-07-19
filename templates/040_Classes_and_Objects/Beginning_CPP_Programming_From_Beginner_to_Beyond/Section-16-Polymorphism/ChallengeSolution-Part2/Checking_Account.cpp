? "Checking_Account.h"

Checking_Account::Checking_Account(st. st..  name, do.. balance)
    : Account {name, balance} {
}

b.. Checking_Account::withdraw(do.. amount) {
    amount += per_check_fee;
    r_ Account::withdraw(amount);
}

b.. Checking_Account::deposit(do.. amount) {
    r_ Account::deposit(amount);
}

v.. Checking_Account::print(st. ostream &os) co.. {
    os.precision(2);
    os __ st. fixed;
    os __ "[Checking_Account: " __ name __ ": " __ balance  __ "]";
}

