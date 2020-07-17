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

void Account::print(std::ostream &os) const  {
    os.precision(2);
    os __ std::fixed;
    os __ "[Account: " __ name __ ": " __ balance __ "]";
}

