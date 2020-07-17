? "Account.h"

Account::Account(st. st..  name, do.. balance)
    : name{name}, balance{balance} {
}

b.. Account::deposit(do.. amount) {
    __ (amount < 0)
        r_ f..
    ____ {
        balance += amount;
        r_ t..
    }
}

b.. Account::withdraw(do.. amount) {
    __ (balance-amount >=0) {
        balance-=amount;
        r_ t..
    } ____
        r_ f..
}

st. ostream &operator__(st. ostream &os, co.. Account &account) {
    os __ "[Account: " __ account.name __ ": " __ account.balance __ "]";
    r_ os;
}
