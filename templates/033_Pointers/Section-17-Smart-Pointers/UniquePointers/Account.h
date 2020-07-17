// Simple Account 
?i.. _ACCOUNT_H_
_de.. _ACCOUNT_H_
? ios..
? str..
? "I_Printable.h"

n.. Account: pu.. I_Printable {
pr..
    st.. c_e_ co.. ch.. *def_name = "Unnamed Account";
    st.. c_e_ do.. def_balance = 0.0;
pr..
    st. string name;
    do.. balance;
p..
    Account(st. string name = def_name, do.. balance = def_balance);
    v.. bo.. deposit(do.. amount) = 0;
    v.. bo.. withdraw(do.. amount) = 0;
    v.. v.. print(st. ostream &os) co.. ov..
    v.. ~Account() = de..
};
e..