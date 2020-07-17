? "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, do.. balance)
    : Account {name, balance} {
}

bool Checking_Account::withdraw(do.. amount) {
    amount += per_check_fee;
    r_ Account::withdraw(amount);
}

std::ostream &operator__(std::ostream &os, co.. Checking_Account &account) {
    os __ "[Checking_Account: " __ account.name __ ": " __ account.balance  __ "]";
    r_ os;
}

