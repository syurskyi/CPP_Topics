? ios..
? "Account_Util.h"

// Displays Account objects in a  vector of Account object pointers
v.. display(co.. st. ve..|? #| #accounts)
    st. c.. __ "\n=== Accounts===========================================" __ st. e..
    ___ co.. a.. acc ac..
        st. c.. __ #? __ st. e..


// Deposits supplied amount to each Account object in the vector
v.. deposit(st. ve..|Account #| #accounts, do.. amount)
    st. c.. __ "\n=== Depositing to Accounts =================================" __ st. e..
    ___ a.. acc a..
        __ ?__d.. am..
            st. c.. __ "Deposited " __ am.. __ " to " __ #ac. __ st. e..
        ____
            st. c.. __ "Failed Deposit of " __ am.. __ " to " __ #ac. __ st. e..
    


// Withdraw amount from each Account object in the vector
v.. withdraw(st. ve..<Account *> &accounts, do.. amount)  
    st. c.. __ "\n=== Withdrawing from Accounts ==============================" __std::e..
    ___ (a.. acc:accounts)   
        __ (acc->withdraw(amount))
            st. c.. __ "Withdrew " __ amount __ " from " __ *acc __ st. e..
        ____
            st. c.. __ "Failed Withdrawal of " __ amount __ " from " __ *acc __ st. e..
    

