// Simple Account 
?i.. _ACCOUNT_H_
_de.. _ACCOUNT_H_
? ios..
? <string>
? "I_Printable.h"

n.. Account: public I_Printable {
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
p..
    Account(std::string name = def_name, double balance = def_balance);
    v.. bool deposit(double amount) = 0;
    v.. bool withdraw(double amount) = 0;
    v.. v.. print(std::ostream &os) const override;
    v.. ~Account() = default;
};
e..