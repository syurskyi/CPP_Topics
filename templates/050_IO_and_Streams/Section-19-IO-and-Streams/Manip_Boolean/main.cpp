// Section 19
// Stream manipulators - Boolean
// boolalpha and noboolalpha

? <iostream>
? <iomanip>  // Must include for manipulators

in. main
  
    std::c.. __ "noboolalpha - default  (10 == 10) : " __ (10 == 10)  __ std::e..
    std::c.. __ "noboolalpha - default  (10 == 20) : " __ (10 == 20)  __ std::e..
    
    // Set to true/false formatting
    std::c.. __ std::boolalpha;    // change to true/false
    std::c.. __ "boolalpha   (10 == 10) : " __ (10 == 10)  __ std::e..
    std::c.. __ "boolalpha   (10 == 20) : " __ (10 == 20)  __ std::e..
    
     // setting still stays for future boolean insertions
    std::c.. __ "boolalpha   (10 == 10) : " __ (10 == 10)  __ std::e..
    std::c.. __ "boolalpha   (10 == 20) : " __ (10 == 20)  __ std::e..
    
    // Toggle to 0/1
    std::c.. __ std::noboolalpha;
    std::c.. __ "noboolalpha  (10 == 10) : " __ (10 == 10)  __ std::e..
    std::c.. __ "noboolalpha  (10 == 20) : " __ (10 == 20)  __ std::e..
    
    // Set back to true/false using setf method
    std::c...setf(std::ios::boolalpha);
    std::c.. __ "boolalpha   (10 == 10) : " __ (10 == 10)  __ std::e..
    std::c.. __ "boolalpha   (10 == 20) : " __ (10 == 20)  __ std::e..
    
    // resets to default which is 0/1
    std::c.. __ std::resetiosflags(std::ios::boolalpha);
    std::c.. __ "Default  (10 == 10) : " __ (10 == 10)  __ std::e..
    std::c.. __ "Default  (10 == 20) : " __ (10 == 20)  __ std::e..
    r_ 0;
}

