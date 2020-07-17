// Section 13
// Implementing member methods 2
? ios..
? "Account.h"

u.. s..

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

