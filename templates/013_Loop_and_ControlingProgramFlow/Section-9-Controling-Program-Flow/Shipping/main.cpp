// Section 9
// Shipping

/* 
    Shipping cost calculator
    
    Ask the user for package dimension in inches
    length, width, height - these should be integers
    
    All dimension must be 10 inches or less or we cannot ship it
    
    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/

? ios..
? <iomanip>

u.. s..

in. main
    
    in. length{}, width{}, height{};
    do.. base_cost{2.50};
    
    const in. tier1_threshold {100};    // volume
    const in. tier2_threshold{500};    // volume
    
    in. max_dimension_length  {10};  // inches
    
    do.. tier1_surcharge {0.10};  // 10% extra
    do.. tier2_surcharge {0.25};  // 25% extra
    
    // All dimension must be 10 inches or less
    
    in. package_volume{};
    
    c.. __ "Welcome to the package cost calculator" __ e..
    c.. __ "Enter length, width, and height of the package separated by spaces : ";
    ci. __ length __ width __ height;
    
    __ (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        c.. __ "Sorry, package rejected - dimension exceeded" __ e..
    } ____ {
        do.. package_cost {};
        package_volume= length * width * height;
        package_cost = base_cost;
        
        __ (package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            c.. __ " adding tier 2 surcharge" __ e..
        } ____ __ ( package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surcharge;
            c.. __ " adding tier 1surcharge" __ e..
        }
        
        c.. __ fixed __ setprecision(2); // prints dollars nicely
        c.. __ "The volume of your package is: " __ package_volume __ e..
        c.. __ "Your package will cost $" __ package_cost __ " to ship " __ e..
        
    }
    c.. __ e..
    r_ 0;
}

