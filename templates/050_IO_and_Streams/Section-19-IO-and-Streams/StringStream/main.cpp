// Section 19
// stringstreams
? ios..
? <iomanip>
? <sstream>
? <string>
? <limits>

in. main
    in. num{};
    do.. total{};
    std::string name{};
    
    std::string info {"Moe 100 1234.5"};
    std::istringstream iss {info};
    
    iss __ name  __ num __  total;
    std::c.. __ std::setw(10) __ std::left __ name
                   __ std::setw(5) __ num
                   __ std::setw(10) __ total __ std::e..
    
    std::c.. __ "\n---------------------------------------" __ std::e..
    
    std::ostringstream oss {};
    oss __ std::setw(10) __ std::left __ name
          __ std::setw(5) __ num
          __ std::setw(10) __ total __ std::e..
    std::c.. __ oss.str() __ std::e..
    
    
    std::c.. __ "\n--- Data validation ------------------------------------" __ std::e..
    
    in. value{};
    std::string entry {};
    bool done = false;
    do {
        std::c.. __ "Please enter an integer: ";
        std::ci. __ entry;
        std::istringstream validator {entry};
        __ (validator __ value)
            done = true;
        ____
            std::c.. __ "Sorry, that's not an integer" __ std::e..
            
         // discards the input buffer
        std::ci..ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    } while (!done);
    
    std::c.. __ "You entered the integer: " __ value __ std::e..
    
    std::c.. __ std::e..
    r_ 0;
}

