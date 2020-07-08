//? |i..
//
//u.. s..
///* POINTERS ARE ordinary variables that can store addresses of variables */
//in. main
//
//    in. var _ 5
//    in. a _ 20
//
//    c.. __ ##v.. __ e..
//
//    in. # c.. p _ #? //that asterisk here is just used to INFORM about that this variable is a POINTER so it is a variable that can point to address of another variable
//
//   // p = &var;
//
//    c.. __ #p __ e.. //that asterisk here is used to RETRIEVE (GET) value FROM indicated (pointed) area in our memory (address)
//
//    //*p = 20;
////    var = 60;
//    #p _ 60
//    c.. __ "var: " __ ? __ e..
//    c.. __ "*p: "__ ? __ e..
//    c.. __ "a: "__ ? __ e..
//
//    in. # c.. _c.. _ #a //this is a pointer that has to be initialized when defined, because it cannot change after defining the thing that it is pointing to (address)
//
//    c.. in. # ?_2 _ #a //this is a pointer that cannot change the value that is under address its pointing to.
//
//    c.. in. # c.. p_3 _ #a //this is a pointer that cannot change the value that is under address its pointing to and also it cant change the address
//
//    c.. __ e.. __ e.. __ e..
//
//    in. ordinary_var _ 10
//
//    in. #?_? _ #?
//
//    c.. __ "ordinary_var: " __ ? __ e.. //integer value
//    c.. __ "&ordinary_var: " __ #? __ e.. //integer value
//    c.. __ "ordinary_p: " __ ?_? __ e.. //address
//    c.. __ "*ordinary_p: " __ #?_? __ e.. //integer value from pointed place (ordinary_var)
//    c.. __ "&ordinary_p: " __ #?_? __ e.. //address of pointer itself
//
//    in. ## ?_pointing_to_address_of_pointer _ #?_?
//
//    c.. __ "p_pointing_to_address_of_pointer: " __ ?_? __ e..
//
//    r_ _
//
