// Section 13
// Copy Constructor
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
    st. st..  get_name r_ name; }
    in. get_health r_ health; }
    in. get_xpreturn xp; }
    Player(st. st..  name_val ="None", in. health_val = 0, in. xp_val = 0);
    // Copy constructor
    Player(co.. Player &source);
    // Destructor
    ~Player c.. __ "Destructor called for: " __ name __ e.. }
};

Player::Player(st. st..  name_val, in. health_val, in. xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
            c.. __ "Three-args constructor for " + name __ e..
}

Player::Player(co.. Player &source)
   // : name(source.name), health(source.health), xp{source.xp} {
       : Player {source.name, source.health, source.xp}  {
        c.. __ "Copy constructor - made copy of: " __ source.name __ e..
}

v.. display_player(Player p) {
    c.. __ "Name: " __ p.get_name() __ e..
    c.. __ "Health: " __ p.get_health() __ e..
    c.. __ "XP: " __ p.get_xp() __ e..
}

in. main
    Player empty {"XXXXXX", 100, 50};
    
    Player my_new_object {empty};
    
    display_player(empty);
    
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
        
    r_ 0;
}