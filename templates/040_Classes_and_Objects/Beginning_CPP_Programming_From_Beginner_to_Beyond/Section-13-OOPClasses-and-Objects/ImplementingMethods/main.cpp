//// Section 13
//// Implementing member methods 1
//? ios..
//? st..
//
//u.. s..
//
//c_ Account
//pr..
//    // attributes
//    st..  name
//    do.. balance
//
//pu..
//    // methods
//    // declared inline
//    v.. set_balance(do.. bal balance _ bal
//    do.. get_balance r_ balance
//
//    // methods will be declared outside the class declaration
//    v.. set_name(st..  n
//    st..  get_name
//
//    b.. deposit do.. amount
//    b.. withdraw do.. amount
//
//
//v.. ? set_name st..  n
//    name _ ?
//
//
//st..  ? get_name
//    r_ name
//
//b.. ? deposit do.. amount
//    // if verify amount
//    b.. +_ ?
//    r_ t..
//
//
//b.. ? withdraw do.. amount
//    __ (b..-? >_ 0
//        b.. -_ ?
//        r_ t..
//     ____
//        r_ f..
//
//
//
//in. main
//    ? frank_account
//    ?.s_n.. "Frank's account"
//    ?.s_b.. 1000.0
//
//    __ ?.d.. 200.0
//        c.. __ "Deposit OK" __ e..
//    ____
//        c.. __ "Deposit Not allowed" __ e..
//
//    __ ?.w.. 500.0
//        c.. __ "Withdrawal OK" __ e..
//    ____
//        c.. __ "Not sufficient funds" __ e..
//
//    __ ?.w.. 1500.0
//        c.. __ "Withdraw OK" __ e..
//    ____
//        c.. __ "Not sufficient funds" __ e..
//
//    r_ _
