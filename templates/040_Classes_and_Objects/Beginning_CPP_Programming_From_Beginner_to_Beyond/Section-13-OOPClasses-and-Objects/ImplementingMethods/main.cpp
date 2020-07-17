// Section 13
// Implementing member methods 1 
? ios..
? st..

u.. s..

c_ Account {
pr..
    // attributes
    st..  name;
    do.. balance;
    
pu..
    // methods
    // declared inline
    v.. set_balance(do.. bal) { balance = bal; }
    do.. get_balance r_ balance; }
    
    // methods will be declared outside the class declaration
    v.. set_name(st..  n);
    st..  get_name();
    
    b.. deposit(do.. amount);
    b.. withdraw(do.. amount);
};

v.. Account::set_name(st..  n) {
    name = n;
}

st..  Account::get_name
    r_ name;
}

b.. Account::deposit(do.. amount) {
    // if verify amount
    balance += amount;
    r_ t..
}

b.. Account::withdraw(do.. amount) {
    __ (balance-amount >= 0) {
        balance -= amount;
        r_ t..
    } ____ {
        r_ f..
    }
}


in. main
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    __ (frank_account.deposit(200.0))
        c.. __ "Deposit OK" __ e..
    ____
        c.. __ "Deposit Not allowed" __ e..
        
    __ (frank_account.withdraw(500.0))
        c.. __ "Withdrawal OK" __ e..
    ____
        c.. __ "Not sufficient funds" __ e..
        
    __ (frank_account.withdraw(1500.0))
        c.. __ "Withdraw OK" __ e..
    ____
        c.. __ "Not sufficient funds" __ e..
    
    r_ 0;
}

