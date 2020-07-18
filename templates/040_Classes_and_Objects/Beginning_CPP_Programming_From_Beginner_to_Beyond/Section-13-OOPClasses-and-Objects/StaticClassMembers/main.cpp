// Section 13
// Static class members
? ios..
? "Player.h"

u.. s..

v.. display_active_players
    c.. __ "Active players: " __ Player::get_num_players() __ e..
}

in. main
    display_active_players();
    Player hero{"Hero"};
    display_active_players();
    
    {
        Player frank{"Frank"};
        display_active_players();
    }
    display_active_players();
    
    Player *enemy = ne. Player("Enemy", 100, 100);
    display_active_players();
    de... enemy;
    display_active_players();    



    r_ 0;
}

