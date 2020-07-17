// Section 19
// stringstreams
? ios..
? iom..
? <sstream>
? st..
? <limits>

in. main
    in. num{};
    do.. total{};
    st. st..  name{};
    
    st. st..  info {"Moe 100 1234.5"};
    st. istringstream iss {info};
    
    iss __ name  __ num __  total;
    st. c.. __ st. setw(10) __ st. left __ name
                   __ st. setw(5) __ num
                   __ st. setw(10) __ total __ st. e..
    
    st. c.. __ "\n---------------------------------------" __ st. e..
    
    st. ostringstream oss {};
    oss __ st. setw(10) __ st. left __ name
          __ st. setw(5) __ num
          __ st. setw(10) __ total __ st. e..
    st. c.. __ oss.str() __ st. e..
    
    
    st. c.. __ "\n--- Data validation ------------------------------------" __ st. e..
    
    in. value{};
    st. st..  entry {};
    b.. done = f..
    do {
        st. c.. __ "Please enter an integer: ";
        st. ci. __ entry;
        st. istringstream validator {entry};
        __ (validator __ value)
            done = t..
        ____
            st. c.. __ "Sorry, that's not an integer" __ st. e..
            
         // discards the input buffer
        st. ci..ignore(st. numeric_limits<st. streamsize>::max(),'\n');
    } w__ (!done);
    
    st. c.. __ "You entered the integer: " __ value __ st. e..
    
    st. c.. __ st. e..
    r_ 0;
}

