// Section 19
// Stream manipulators - Boolean
// boolalpha and noboolalpha

? ios..
? iom..  // Must include for manipulators

in. main
  
    st. c.. __ "noboolalpha - default  (10 == 10) : " __ (10 __ 10)  __ st. e..
    st. c.. __ "noboolalpha - default  (10 == 20) : " __ (10 __ 20)  __ st. e..
    
    // Set to true/false formatting
    st. c.. __ st. boolalpha;    // change to true/false
    st. c.. __ "boolalpha   (10 == 10) : " __ (10 __ 10)  __ st. e..
    st. c.. __ "boolalpha   (10 == 20) : " __ (10 __ 20)  __ st. e..
    
     // setting still stays for future boolean insertions
    st. c.. __ "boolalpha   (10 == 10) : " __ (10 __ 10)  __ st. e..
    st. c.. __ "boolalpha   (10 == 20) : " __ (10 __ 20)  __ st. e..
    
    // Toggle to 0/1
    st. c.. __ st. noboolalpha;
    st. c.. __ "noboolalpha  (10 == 10) : " __ (10 __ 10)  __ st. e..
    st. c.. __ "noboolalpha  (10 == 20) : " __ (10 __ 20)  __ st. e..
    
    // Set back to true/false using setf method
    st. c...setf(st. ios::boolalpha);
    st. c.. __ "boolalpha   (10 == 10) : " __ (10 __ 10)  __ st. e..
    st. c.. __ "boolalpha   (10 == 20) : " __ (10 __ 20)  __ st. e..
    
    // resets to default which is 0/1
    st. c.. __ st. resetiosflags(st. ios::boolalpha);
    st. c.. __ "Default  (10 == 10) : " __ (10 __ 10)  __ st. e..
    st. c.. __ "Default  (10 == 20) : " __ (10 __ 20)  __ st. e..
    r_ _
}

