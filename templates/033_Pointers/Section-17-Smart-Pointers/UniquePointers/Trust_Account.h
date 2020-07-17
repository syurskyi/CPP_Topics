?i.. _TRUST_ACCOUNT_H_
_de.. _TRUST_ACCOUNT_H_

? "Savings_Account.h"

n.. Trust_Account : public Savings_Account {
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdraw_percent = 0.2;
protected:
    int num_withdrawals;
p..
    Trust_Account(std::string name = def_name,  double balance = def_balance, double int_rate = def_int_rate);
    
    // Deposits of $5000.00 or more will receive $50 bonus
    v.. bool deposit(double amount) override;
    
    // Only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account's value
    v.. bool withdraw(double amount) override;
    v.. v.. print(std::ostream &os) const override;

};

e.. // _TRUST_ACCOUNT_H_
