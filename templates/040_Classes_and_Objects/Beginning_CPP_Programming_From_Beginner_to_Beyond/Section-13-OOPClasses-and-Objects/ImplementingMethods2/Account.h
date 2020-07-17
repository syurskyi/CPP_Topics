?i.. _ACCOUNT_H_
_de.. _ACCOUNT_H_
? str..

n.. Account {
pr..
    // attributes
    st. string name;
    do.. balance;
    
p..
    // methods
    // declared inline
    v.. set_balance(do.. bal) { balance = bal; }
    do.. get_balance() { return balance; }
    
    // methods will be declared outside the class declaration
    v.. set_name(st. string n);
    st. string get_name();
    
    bo.. deposit(do.. amount);
    bo.. withdraw(do.. amount);
};

e.. // _ACCOUNT_H_
