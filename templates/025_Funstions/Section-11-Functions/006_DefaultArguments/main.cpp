//// Section 11
//// Default Arguments
//? ios..
//? iom..
//? st..
//
//u.. s..
//
//do.. calc_cost(do.. base_cost _ 100.0, do.. tax_rate _ 0.06, do.. shipping _ 3.50
//
//v.. greeting(string name,  string prefix _ "Mr.", string suffix _ ""
//
//do.. c.. do.. base_cost, do.. tax_rate, do.. shipping
//    r_ base_cost +_ (base_cost * tax_rate) + shipping
//
//
//v.. g.. string name,  string prefix, string suffix
//    c.. __ "Hello " __ p.. + " " + n.. + " " + s.. __ e..
//
//
//
//in. main
//    do.. cost 0
//    cost _ c_c.. 100.0, 0.08, 4.25        // will use no defaults  100 + 8 + 4.25
//
//    c.. __ fixed __ setprecision 2
//    c.. __ "Cost is: " __ cost __ e..    // 112.25
//
//    cost _ c_c.. 100.0, 0.08                 // will use default shipping  100 + 8 + 3.50
//    c.. __ "Cost is: " __ ? __ e..    // 111.50
//
//    cost _ c_c.. 200.0                      // will use default tax and shipping   200 + 12 + 3.50
//    c.. __ "Cost is: " __ ? __ e..    // 215.50
//
//    cost _ c_c..
//    c.. __ "Cost is: " __ ? __ e..    // 100 + 6 + 3.50
//
//    ? "Glenn Jones", "Dr.", "M.D."
//    ? "James Rogers", "Professor", "Ph.D."
//    ? "Frank Miller", "Dr."
//    ? "William Smith"
//    ? "Mary Howard", "Mrs.", "Ph.D."
//
//    c.. __ e..
//    r_ _
//_
