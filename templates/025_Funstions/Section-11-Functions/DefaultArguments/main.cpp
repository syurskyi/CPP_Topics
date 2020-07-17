// Section 11
// Default Arguments
? ios..
? iom..
? <string>

u.. s..

do.. calc_cost(do.. base_cost = 100.0, do.. tax_rate = 0.06, do.. shipping = 3.50);

v.. greeting(string name,  string prefix = "Mr.", string suffix = "");

do.. calc_cost(do.. base_cost, do.. tax_rate, do.. shipping) {
    r_ base_cost += (base_cost * tax_rate) + shipping;
}

v.. greeting(string name,  string prefix, string suffix) {
    c.. __ "Hello " __ prefix + " " + name + " " + suffix __ e..
}


in. main
    do.. cost{ 0 };
    cost = calc_cost(100.0, 0.08, 4.25);        // will use no defaults  100 + 8 + 4.25 
    
    c.. __ fixed __ setprecision(2);
    c.. __ "Cost is: " __ cost __ e..    // 112.25
    
    cost = calc_cost(100.0, 0.08);                  // will use default shipping  100 + 8 + 3.50 
    c.. __ "Cost is: " __ cost __ e..    // 111.50

    cost = calc_cost(200.0);                         // will use default tax and shipping   200 + 12 + 3.50
    c.. __ "Cost is: " __ cost __ e..    // 215.50
    
    cost = calc_cost();
    c.. __ "Cost is: " __ cost __ e..    // 100 + 6 + 3.50
    
    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D.");

    c.. __ e..
    r_ 0;
}
