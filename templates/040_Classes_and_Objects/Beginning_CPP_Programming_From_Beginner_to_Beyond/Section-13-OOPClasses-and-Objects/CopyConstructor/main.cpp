//// Section 13
//// Copy Constructor
//? ios..
//? st..
//
//u.. s..
//
//c_ Player
//
//pr..
//   st. st..  name
//   in. health
//   in. xp
//pu..
//    st. st..  get_name r_ name
//    in. get_health r_ health
//    in. get_xpreturn xp
//    ?(st. st..  name_val ="None", in. health_val = 0, in. xp_val = 0);
//    // Copy constructor
//    ?(co.. ? #source
//    // Destructor
//    #? c.. __ "Destructor called for: " __ n.. __ e..
//
//
//? ? st. st..  name_val, in. health_val, in. xp_val
//    : n.. ? h.. ? x. ?
//            c.. __ "Three-args constructor for " + n.. __ e..
//
//
//? ? co.. ? #source
//   // : name(source.name), health(source.health), xp source.xp
//       | ?  ?.n.. ?.h.. ?.x.
//        c.. __ "Copy constructor - made copy of: " __ ?.n.. __ e..
//
//
//v.. display_player ? p
//    c.. __ "Name: " __ ?.g_n.. __ e..
//    c.. __ "Health: " __ ?.g_h.. __ e..
//    c.. __ "XP: " __ ?.g_x. __ e..
//
//
//in. main
//    ? empty  "XXXXXX", 100, 50
//
//    ? my_new_object  empty
//
//    d_p.. e..
//
//    ? frank  "Frank"
//    ? hero  "Hero", 100
//    ? villain  "Villain", 100, 55
//
//    r_ _
//