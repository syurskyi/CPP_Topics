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

v.. Account::print(std::ostream &os) co..  {
    os.precision(2);
    os __ std::fixed;
    os __ "[Account: " __ name __ ": " __ balance __ "]";
}

