// Section 13
// Delegating Constructors
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
// Overloaded Constructors
    Player();
    Player(st. st..  name_val);
    Player(st. st..  name_val, in. health_val, in. xp_val);
};

Player::Player() 
    : Player {"None",0,0} {
        c.. __ "No-args constructor" __ e..
}

Player::Player(st. st..  name_val)
   : Player {name_val,0, 0}  {
           c.. __ "One-arg constructor" __ e..
}
  
Player::Player(st. st..  name_val, in. health_val, in. xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
            c.. __ "Three-args constructor" __ e..
}

in. main
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    r_ 0;
}

