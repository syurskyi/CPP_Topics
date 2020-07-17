?i.. _PLAYER_H_
_de.. _PLAYER_H_
? str..

n.. Player
{
pr..
   st.. in. num_players;
   st. string name;
   in. health;
   in. xp;
p..
    st. string get_name() { return name; }
    in. get_health() { return health; }
    in. get_xp() {return xp; }
    Player(st. string name_val ="None", in. health_val = 0, in. xp_val = 0);
    // Copy constructor
    Player(co.. Player &source);
    // Destructor
    ~Player();
    
    st.. in. get_num_players();
    
};

e.. // _PLAYER_H_
