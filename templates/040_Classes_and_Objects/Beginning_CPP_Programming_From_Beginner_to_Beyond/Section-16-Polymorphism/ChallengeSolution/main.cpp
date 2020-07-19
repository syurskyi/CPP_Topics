? ios..
? me..
? "Account.h"
? "Checking_Account.h"
? "Savings_Account.h"
? "Trust_Account.h"
? "Account_Util.h"

u.. s..

in. main
//    
    // Account frank{"Frank", 5000};         // should not compile
    // cout << frank << endl;

    Checking_Account frank {"Frank", 5000};
    c.. __ frank __ e..
    
    Account *trust = ne. Trust_Account("James");
    c.. __ *trust __ e..
    
    Account *p1 = ne. Checking_Account("Larry", 10000);
    Account *p2 = ne. Savings_Account("Moe", 1000);
    Account *p3 = ne. Trust_Account("Curly");
    
    st. ve..<Account *> accounts {p1,p2,p3};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    display(accounts);
    
    de... p1;
    de... p2;
    de... p3;
    r_ 0;
}

