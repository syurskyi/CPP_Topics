? ios..
? "Account_Util.h"

// Displays Account objects in a  vector of Account object pointers
v.. display(co.. st. ve..<Account *> &accounts) {
    st. c.. __ "\n=== Accounts===========================================" __ st. e..
    ___ (co.. a.. acc: accounts)
        st. c.. __ *acc __ st. e..
}

// Deposits supplied amount to each Account object in the vector
v.. deposit(st. ve..<Account *> &accounts, do.. amount) {
    st. c.. __ "\n=== Depositing to Accounts =================================" __ st. e..
    ___ (a.. acc:accounts)  {
        __ (acc->deposit(amount))
            st. c.. __ "Deposited " __ amount __ " to " __ *acc __ st. e..
        ____
            st. c.. __ "Failed Deposit of " __ amount __ " to " __ *acc __ st. e..
    }
}

// Withdraw amount from each Account object in the vector
v.. withdraw(st. ve..<Account *> &accounts, do.. amount) {
    st. c.. __ "\n=== Withdrawing from Accounts ==============================" __std::e..
    ___ (a.. acc:accounts)  {
        __ (acc->withdraw(amount))
            st. c.. __ "Withdrew " __ amount __ " from " __ *acc __ st. e..
        ____
            st. c.. __ "Failed Withdrawal of " __ amount __ " from " __ *acc __ st. e..
    } 
}
