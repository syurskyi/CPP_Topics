? "Player.h"

in. Player::num_players {0};

Player::Player(st. st..  name_val, in. health_val, in. xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        ++num_players;
}

Player::Player(co.. Player &source)
       : Player {source.name, source.health, source.xp}  {
}

Player::~Player
    --num_players;
}

in. Player::get_num_players
    r_ num_players;
}


