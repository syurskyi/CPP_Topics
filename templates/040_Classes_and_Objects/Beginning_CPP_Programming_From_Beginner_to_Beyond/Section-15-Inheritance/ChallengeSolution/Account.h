// Simple Account 
?i.. _ACCOUNT_H_
_de.. _ACCOUNT_H_
? ios..
? str..

n.. Account {
    fr.. st. ostream &operator<<(st. ostream &os, co.. Account &account);
pr..
    st.. c_e_ co.. ch.. *def_name = "Unnamed Account";
    st.. c_e_ do.. def_balance = 0.0;
pr..
    st. string name;
    do.. balance;
p..
    Account(st. string name = def_name, do.. balance = def_balance);
    bo.. deposit(do.. amount);
    bo.. withdraw(do.. amount);
};
e..