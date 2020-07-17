? ios..
? "Account_Util.h"

// Displays Account objects in a  vector of Account object pointers
v.. display(co.. std::ve..<Account *> &accounts) {
    std::c.. __ "\n=== Accounts===========================================" __ std::e..
    ___ (co.. a.. acc: accounts)
        std::c.. __ *acc __ std::e..
}

// Deposits supplied amount to each Account object in the vector
v.. deposit(std::ve..<Account *> &accounts, do.. amount) {
    std::c.. __ "\n=== Depositing to Accounts =================================" __ std::e..
    ___ (a.. acc:accounts)  {
        __ (acc->deposit(amount))
            std::c.. __ "Deposited " __ amount __ " to " __ *acc __ std::e..
        ____
            std::c.. __ "Failed Deposit of " __ amount __ " to " __ *acc __ std::e..
    }
}

// Withdraw amount from each Account object in the vector
v.. withdraw(std::ve..<Account *> &accounts, do.. amount) {
    std::c.. __ "\n=== Withdrawing from Accounts ==============================" __std::e..
    ___ (a.. acc:accounts)  {
        __ (acc->withdraw(amount))
            std::c.. __ "Withdrew " __ amount __ " from " __ *acc __ std::e..
        ____
            std::c.. __ "Failed Withdrawal of " __ amount __ " from " __ *acc __ std::e..
    } 
}
