// Section 15
// Deriving our First Class

? ios..
? "Account.h"
? "Savings_Account.h"

u.. s..

in. main
    
    // Use the Account class
    c.. __ "\n=== Account ==================================" __ e..
    Account acc {};
    acc.deposit(2000.0);               
    acc.withdraw(500.0);
    
    c.. __ e..
    
    Account *p_acc {n_p_};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

// Use the Savings Account class
    
    c.. __ "\n=== Savings Account ==========================" __ e..
    Savings_Account sav_acc {};
    sav_acc.deposit(2000.0);               
    sav_acc.withdraw(500.0);
    
    c.. __ e..
    
    Savings_Account *p_sav_acc {n_p_};
    p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;

    c.. __ "\n==============================================" __ e..
    r_ 0;
}

