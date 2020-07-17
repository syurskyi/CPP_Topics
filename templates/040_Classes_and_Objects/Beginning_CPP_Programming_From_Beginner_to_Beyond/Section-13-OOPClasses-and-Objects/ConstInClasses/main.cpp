// Section 13
// Const in Classes
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
    st. st..  get_name() co..  {         // consty method
        r_ name;
    }
    v.. set_name(st. st..  name_val)   {
        name = name_val;
    }
// Overloaded Constructors
    Player();
    Player(st. st..  name_val);
    Player(st. st..  name_val, in. health_val, in. xp_val);
};

Player::Player() 
    : Player {"None",0,0} {
}

Player::Player(st. st..  name_val)
   : Player {name_val,0, 0}  {
}
  
Player::Player(st. st..  name_val, in. health_val, in. xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
}

v.. display_player_name(co.. Player &p) {
    c.. __ p.get_name() __ e..
}

in. main
    
    co.. Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100, 15};
    
   // villain.set_name("Super villain");
    c.. __ villain.get_name() __ e..
    c.. __ hero.get_name() __ e..
    
    display_player_name(villain);
    display_player_name(hero);

    
  
    r_ 0;
}

