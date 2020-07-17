//?i.. _TRUST_ACCOUNT_H_
//_de.. _TRUST_ACCOUNT_H_
//
//? "S..
//
//n.. ?  pu.. ?
//pr..
//    st.. c_e_ co.. ch.. #def_name _ "Unnamed Trust Account"
//    st.. c_e_ do.. def_balance _ 0.0
//    st.. c_e_ do.. def_int_rate _ 0.0
//    st.. c_e_ do.. bonus_amount _ 50.0
//    st.. c_e_ do.. bonus_threshold _ 5000.0
//    st.. c_e_ in. max_withdrawals _ 3
//    st.. c_e_ do.. max_withdraw_percent _ 0.2
//pr..
//    in. num_withdrawals
//p..
//    ?(st. string name _ def_name,  do.. balance _ def_balance, do.. int_rate _ def_int_rate
//
//    // Deposits of $5000.00 or more will receive $50 bonus
//    v.. bo.. deposit do.. amount ov..
//
//    // Only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account's value
//    v.. bo.. withdraw do.. amount ov..
//    v.. v.. print st. ostream #os co.. ov..
//
//
//
//e.. // _TRUST_ACCOUNT_H_
