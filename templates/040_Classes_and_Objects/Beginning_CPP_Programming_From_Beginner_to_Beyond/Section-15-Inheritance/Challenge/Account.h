// Simple Account 
?i.. _ACCOUNT_H_
_de.. _ACCOUNT_H_
? ios..
? str..

n.. Account {
    friend st. ostream &operator<<(st. ostream &os, co.. Account &account);
pr..
    st.. c_e_ co.. ch.. *def_name = "Unnamed Account";
    st.. c_e_ do.. def_balance = 0.0;
pr..
    st. string name;
    do.. balance;
p..
    Account(st. string name = def_name, do.. balance = def_balance);
    // Account(std::string name = "Unamed Account", double balance = 0.0);
    bo.. deposit(do.. amount);
    bo.. withdraw(do.. amount);
    do.. get_balance() co..;
};
e..