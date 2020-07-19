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

st. ostream &operator__(st. ostream &os, co.. Trust_Account &account) {
    os __ "[Trust Account: " __ account.name __ ": " __ account.balance __ ", " __ account.int_rate
        __ "%, withdrawals: " __ account.num_withdrawals __  "]";
    r_ os;
}
