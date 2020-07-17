// Section 13
// Declare Classes and Objects
? ios..
? st..
? ve..

u.. s..

c_ Player {
    // attributes
    st..  name {"Player"};
    in. health {100};
    in. xp {3};
    
    // methods
    v.. talk(st.. );
    b.. is_dead();
};

c_ Account {
    // attributes
    st..  name {"Account"};
    do.. balance {0.0};
    
    // methods
    b.. deposit(do..);
    b.. withdraw(do..);
    
};


in. main
    Account frank_account;
    Account jim_account;
    
    
    Player frank;
    Player hero;
    
    Player players[] {frank, hero};
    
    ve..<Player> player_vec {frank};
    player_vec.push_back(hero);
    
    
    Player *enemy {n_p_};
    enemy = new Player;
    
    delete enemy;

    r_ 0;
}