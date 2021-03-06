//? "Trust_Account.h"
//
//? ?(st. st..  name, do.. balance, do.. int_rate
//    : S.. {n.., b.., i..}, n_w_ 0
//
//
//
//// Deposit additional $50 bonus when amount >= $5000
//b.. ? deposit(do.. amount
//    __ (a.. >_ b_t..)
//        a.. +_ b_a..
//    r_ S.. ? a..
//
//
//// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
//b.. ? withdraw(do.. amount
//    __ (n_w_ >_ m_w.. __ (a.. > b.. * m_w_p..
//        r_ f..
//    ____
//        ++n_w_
//        r_ S.. ? a..
//
//
//
//v.. ? print(st. ostream #os co..
//    ?.pr.. 2
//    ? __ st. fixed
//    ? __ "[Trust Account: " __ n.. __ ": " __ b.. __ ", " __ i..
//        __ "%, withdrawals: " __ n_w_ __  "]";
//
//
