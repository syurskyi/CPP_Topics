// Section 16 
// 012_Challenge
? ios..
? ve..
? "Account.h"
? "Savings_Account.h"
? "Checking_Account.h"
? "Trust_Account.h"
? "Account_Util.h"

u.. s..

in. main
    c...precision(2);
    c.. __ fixed;
   
    // Accounts
    ve..<Account> accounts;
    accounts.push_back(Account  });
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    ve..<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
   
   // Checking
   
    ve..<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account {} );
    check_accounts.push_back(Checking_Account {"Kirk"} );
    check_accounts.push_back(Checking_Account {"Spock", 2000} );
    check_accounts.push_back(Checking_Account {"Bones", 5000} );

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust
  
    ve..<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {} );
    trust_accounts.push_back(Trust_Account {"Athos", 10000, 5.0} );
    trust_accounts.push_back(Trust_Account {"Porthos", 20000, 4.0} );
    trust_accounts.push_back(Trust_Account {"Aramis", 30000} );

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    ___ (in. i=1; i<=5; i++)
        withdraw(trust_accounts, 1000);
    

    
    r_ 0;
}

