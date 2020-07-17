? "Account.h"

Account::Account(std::string name, do.. balance)
    : name{name}, balance{balance} {
}

bool Account::deposit(do.. amount) {
    __ (amount < 0)
        r_ false;
    ____ {
        balance += amount;
        r_ true;
    }
}

bool Account::withdraw(do.. amount) {
    __ (balance-amount >=0) {
        balance-=amount;
        r_ true;
    } ____
        r_ false;
}

do.. Account::get_balance() co.. {
    r_ balance;
}

std::ostream &operator__(std::ostream &os, co.. Account &account) {
    os __ "[Account: " __ account.name __ ": " __ account.balance __ "]";
    r_ os;
}
