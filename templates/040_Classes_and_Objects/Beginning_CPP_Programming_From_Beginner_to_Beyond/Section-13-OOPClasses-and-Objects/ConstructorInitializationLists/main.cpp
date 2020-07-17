// Section 13
// Constructor Initialization Lists
? ios..
? st..

u.. s..

c_ Player
{
pr..
   st. st..  name {"XXXXXXX"};
   in. health;
   in. xp;
pu..
// Overloaded Constructors
    Player();
    Player(st. st..  name_val);
    Player(st. st..  name_val, in. health_val, in. xp_val);
};

Player::Player() 
    : name{"None"}, health{0}, xp{0} {
}

Player::Player(st. st..  name_val)
   : name{name_val}, health{0}, xp{0} {
}
  
Player::Player(st. st..  name_val, in. health_val, in. xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
    
}

in. main
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    r_ 0;
}

