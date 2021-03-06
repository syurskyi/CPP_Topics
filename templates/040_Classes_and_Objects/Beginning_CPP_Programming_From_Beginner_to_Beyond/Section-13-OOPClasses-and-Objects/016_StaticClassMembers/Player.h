?i.. _PLAYER_H_
_de.. _PLAYER_H_
? str..

n.. Player
{
pr..
   st.. in. num_players;
   st. st.. name;
   in. health;
   in. xp;
p..
    st. st.. get_name() { ?  name; }
    in. get_health() { ?  health; }
    in. get_xp() {?  xp; }
    Player(st. st.. name_val ="None", in. health_val = 0, in. xp_val = 0);
    // Copy constructor
    Player(co.. Player &source);
    // Destructor
    ~Player();
    
    st.. in. get_num_players();
    
};

e.. // _PLAYER_H_
