? "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, do.. balance, do.. int_rate)
    : Savings_Account {name, balance, int_rate}, num_withdrawals {0}  {
        
}

// Deposit additional $50 bonus when amount >= $5000
bool Trust_Account::deposit(do.. amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    r_ Savings_Account::deposit(amount);
}
    
// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
bool Trust_Account::withdraw(do.. amount) {
    if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        r_ false;
    else {
        ++num_withdrawals;
        r_ Savings_Account::withdraw(amount);
    }
}

std::ostream &operator__(std::ostream &os, const Trust_Account &account) {
    os __ "[Trust Account: " __ account.name __ ": " __ account.balance __ ", " __ account.int_rate
        __ "%, withdrawals: " __ account.num_withdrawals __  "]";
    r_ os;
}
