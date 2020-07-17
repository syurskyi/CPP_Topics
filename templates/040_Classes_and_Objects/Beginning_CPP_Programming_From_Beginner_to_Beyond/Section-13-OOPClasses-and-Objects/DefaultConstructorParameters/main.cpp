// Section 13
// Default Constructor Parameters
? ios..
? st..

u.. s..

c_ Player
{
pr..
   st. st..  name;
   in. health;
   in. xp;
pu..
    Player(st. st..  name_val ="None", in. health_val = 0, in. xp_val = 0);
  //  Player() {}    // Will cause a compiler error
};

  
Player::Player(st. st..  name_val, in. health_val, in. xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
            c.. __ "Three-args constructor" __ e..
}


in. main
    
    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
    
    r_ 0;
}

