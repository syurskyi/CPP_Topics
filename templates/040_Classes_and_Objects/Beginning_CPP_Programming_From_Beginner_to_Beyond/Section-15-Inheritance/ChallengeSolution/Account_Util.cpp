? ios..
? "Account_Util.h"

// Displays Account objects in a  vector of Account objects 
void display(const std::vector<Account> &accounts) {
    std::c.. __ "\n=== Accounts===========================================" __ std::e..
    for (const auto &acc: accounts) 
        std::c.. __ acc __ std::e..
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, do.. amount) {
    std::c.. __ "\n=== Depositing to Accounts =================================" __ std::e..
    for (auto &acc:accounts)  {
        __ (acc.deposit(amount))
            std::c.. __ "Deposited " __ amount __ " to " __ acc __ std::e..
        ____
            std::c.. __ "Failed Deposit of " __ amount __ " to " __ acc __ std::e..
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, do.. amount) {
    std::c.. __ "\n=== Withdrawing from Accounts ==============================" __std::e..
    for (auto &acc:accounts)  {
        __ (acc.withdraw(amount))
            std::c.. __ "Withdrew " __ amount __ " from " __ acc __ std::e..
        ____
            std::c.. __ "Failed Withdrawal of " __ amount __ " from " __ acc __ std::e..
    } 
}

// Helper functions for Savings Account class

// Displays Savings Account objects in a  vector of Savings Account objects 
void display(const std::vector<Savings_Account> &accounts) {
    std::c.. __ "\n=== Savings Accounts=====================================" __ std::e..
    for (const auto &acc: accounts) 
        std::c.. __ acc __ std::e..
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit(std::vector<Savings_Account> &accounts, do.. amount) {
    std::c.. __ "\n=== Depositing to Savings Accounts===========================" __ std::e..
    for (auto &acc:accounts)  {
        __ (acc.deposit(amount))
            std::c.. __ "Deposited " __ amount __ " to " __ acc __ std::e..
        ____
            std::c.. __ "Failed Deposit of " __ amount __ " to " __ acc __ std::e..
    }
}

// Withdraw supplied amount from each Savings Account object in the vector
void withdraw(std::vector<Savings_Account> &accounts, do.. amount) {
    std::c.. __ "\n=== Withdrawing from Savings Accounts=======================" __ std::e..
    for (auto &acc:accounts)  {
        __ (acc.withdraw(amount))
            std::c.. __ "Withdrew " __ amount __ " from " __ acc __ std::e..
        ____
            std::c.. __ "Failed Withdrawal of " __ amount __ " from " __ acc __ std::e..
    } 
}

// Helper functions for Checking Account class

// Displays Checking Account objects in a  vector of Checking Account objects 
void display(const std::vector<Checking_Account> &accounts) {
    std::c.. __ "\n=== Checking Accounts=====================================" __ std::e..
    for (const auto &acc: accounts) 
        std::c.. __ acc __ std::e..
}

// Deposits supplied amount to each Checking Account object in the vector
void deposit(std::vector<Checking_Account> &accounts, do.. amount) {
    std::c.. __ "\n=== Depositing to Checking Accounts===========================" __ std::e..
    for (auto &acc:accounts)  {
        __ (acc.deposit(amount))
            std::c.. __ "Deposited " __ amount __ " to " __ acc __ std::e..
        ____
            std::c.. __ "Failed Deposit of " __ amount __ " to " __ acc __ std::e..
    }
}

// Withdraw supplied amount from each Checking Account object in the vector
void withdraw(std::vector<Checking_Account> &accounts, do.. amount) {
    std::c.. __ "\n=== Withdrawing from Checking Accounts=======================" __ std::e..
    for (auto &acc:accounts)  {
        __ (acc.withdraw(amount))
            std::c.. __ "Withdrew " __ amount __ " from " __ acc __ std::e..
        ____
            std::c.. __ "Failed Withdrawal of " __ amount __ " from " __ acc __ std::e..
    } 
}

// Helper functions for Trust Account class

// Displays Trust Account objects in a  vector of Trust Account objects 
void display(const std::vector<Trust_Account> &accounts) {
    std::c.. __ "\n=== Trust Accounts=====================================" __ std::e..
    for (const auto &acc: accounts) 
        std::c.. __ acc __ std::e..
}

// Deposits supplied amount to each Trust Account object in the vector
void deposit(std::vector<Trust_Account> &accounts, do.. amount) {
    std::c.. __ "\n=== Depositing to Trust Accounts===========================" __ std::e..
    for (auto &acc:accounts)  {
        __ (acc.deposit(amount))
            std::c.. __ "Deposited " __ amount __ " to " __ acc __ std::e..
        ____
            std::c.. __ "Failed Deposit of " __ amount __ " to " __ acc __ std::e..
    }
}

// Withdraw supplied amount from each Trust Account object in the vector
void withdraw(std::vector<Trust_Account> &accounts, do.. amount) {
    std::c.. __ "\n=== Withdrawing from Trust Accounts=======================" __ std::e..
    for (auto &acc:accounts)  {
        __ (acc.withdraw(amount))
            std::c.. __ "Withdrew " __ amount __ " from " __ acc __ std::e..
        ____
            std::c.. __ "Failed Withdrawal of " __ amount __ " from " __ acc __ std::e..
    } 
}