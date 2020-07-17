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

void Trust_Account::print(std::ostream &os) const {
    os.precision(2);
    os __ std::fixed;
    os __ "[Trust Account: " __ name __ ": " __ balance __ ", " __ int_rate
        __ "%, withdrawals: " __ num_withdrawals __  "]";
}

