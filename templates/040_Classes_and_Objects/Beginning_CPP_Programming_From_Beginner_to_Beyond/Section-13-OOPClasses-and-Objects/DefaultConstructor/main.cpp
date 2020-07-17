// Section 13
// Default Constructors
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
    v.. set_name(st. st..  name_val) {
        name = name_val; 
    }
    st. st..  get_name
        r_ name;
    }
    Player
        name = "None";
        health = 100;
        xp = 3;
    }
    Player(st. st..  name_val, in. health_val, in. xp_val) {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
    
};

in. main
    Player hero;
    Player frank {"Frank", 100, 13};
    frank.set_name("Frank");
    c.. __ frank.get_name() __ e..
    r_ 0;
}

