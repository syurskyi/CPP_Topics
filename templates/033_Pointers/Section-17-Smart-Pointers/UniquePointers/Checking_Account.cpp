? "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, do.. balance)
    : Account {name, balance} {
}

bool Checking_Account::deposit(do.. amount) {
    r_ Account::deposit(amount);
}

bool Checking_Account::withdraw(do.. amount) {
    amount += per_check_fee;
    r_ Account::withdraw(amount);
}

void Checking_Account::print(std::ostream &os) co.. {
    os.precision(2);
    os __ std::fixed;
    os __ "[Checking_Account: " __ name __ ": " __ balance  __ "]";
}


