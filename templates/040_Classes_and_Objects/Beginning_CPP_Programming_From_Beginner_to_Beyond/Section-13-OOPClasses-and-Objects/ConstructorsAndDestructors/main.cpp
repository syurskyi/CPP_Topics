// Section 13
// Constructors and Destructors

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
    // Overloaded Constructors
    Player
        c.. __ "No args constructor called"__ e..
    }
    Player(st. st..  name) {
        c.. __ "String arg constructor called"__ e..
    }
    Player(st. st..  name, in. health, in. xp) {
        c.. __ "Three args constructor called"__ e..
    }
    ~Player
        c.. __ "Destructor called for " __ name __ e..
    }
};

in. main

    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    r_ 0;
}

