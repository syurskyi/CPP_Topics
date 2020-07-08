? |i..

u.. s..
/* POINTERS ARE ordinary variables that can store addresses of variables */
in. main()
{
    in. var = 5;
    in. a = 20;

    c.. __ *&var __ e..

    in. * const p = &var; //that asterisk here is just used to INFORM about that this variable is a POINTER so it is a variable that can point to address of another variable

   // p = &var;

    c.. __ *p __ e.. //that asterisk here is used to RETRIEVE (GET) value FROM indicated (pointed) area in our memory (address)

    //*p = 20;
//    var = 60;
    *p = 60;
    c.. __ "var: " __ var __ e..
    c.. __ "*p: "__ *p __ e..
    c.. __ "a: "__ a __ e..

    in. * const p_const = &a; //this is a pointer that has to be initialized when defined, because it cannot change after defining the thing that it is pointing to (address)

    const in. * p_2 = &a; //this is a pointer that cannot change the value that is under address its pointing to.

    const in. * const p_3 = &a; //this is a pointer that cannot change the value that is under address its pointing to and also it cant change the address

    c.. __ endl __ endl __ e..

    in. ordinary_var = 10;

    in. *ordinary_p = &ordinary_var;

    c.. __ "ordinary_var: " __ ordinary_var __ e.. //integer value
    c.. __ "&ordinary_var: " __ &ordinary_var __ e.. //integer value
    c.. __ "ordinary_p: " __ ordinary_p __ e.. //address
    c.. __ "*ordinary_p: " __ *ordinary_p __ e.. //integer value from pointed place (ordinary_var)
    c.. __ "&ordinary_p: " __ &ordinary_p __ e.. //address of pointer itself

    in. ** p_pointing_to_address_of_pointer = &ordinary_p;

    c.. __ "p_pointing_to_address_of_pointer: " __ p_pointing_to_address_of_pointer __ e..

    r_ _
}