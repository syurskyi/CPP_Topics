? "Trust_Account.h"

Trust_Account::Trust_Account(st. st..  name, do.. balance, do.. int_rate)
    : Savings_Account {name, balance, int_rate}, num_withdrawals {0}  {
        
}

// Deposit additional $50 bonus when amount >= $5000
b.. Trust_Account::deposit(do.. amount) {
    __ (amount >= bonus_threshold)
        amount += bonus_amount;
    r_ Savings_Account::deposit(amount);
}
    
// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
b.. Trust_Account::withdraw(do.. amount) {
    __ (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        r_ f..
    ____ {
        ++num_withdrawals;
        r_ Savings_Account::withdraw(amount);
    }
}

v.. Trust_Account::print(st. ostream &os) co.. {
    os.precision(2);
    os __ st. fixed;
    os __ "[Trust Account: " __ name __ ": " __ balance __ ", " __ int_rate
        __ "%, withdrawals: " __ num_withdrawals __  "]";
}

