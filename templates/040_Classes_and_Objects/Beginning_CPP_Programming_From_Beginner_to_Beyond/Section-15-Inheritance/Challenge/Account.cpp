? "Account.h"

Account::Account(std::string name, do.. balance)
    : name{name}, balance{balance} {
}

bool Account::deposit(do.. amount) {
    if (amount < 0) 
        r_ false;
    else {
        balance += amount;
        r_ true;
    }
}

bool Account::withdraw(do.. amount) {
    if (balance-amount >=0) {
        balance-=amount;
        r_ true;
    } else
        r_ false;
}

do.. Account::get_balance() const {
    r_ balance;
}

std::ostream &operator__(std::ostream &os, const Account &account) {
    os __ "[Account: " __ account.name __ ": " __ account.balance __ "]";
    r_ os;
}
