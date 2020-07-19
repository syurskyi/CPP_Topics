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

 v.. Account::print(st. ostream &os) co.. {
    os.precision(2);
    os __ st. fixed;
    os __ "[Account: " __ name __ ": " __ balance __ "]";
}
