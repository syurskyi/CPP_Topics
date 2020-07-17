? ios..
? st..
? "Player.h"
? "Other_class.h"
? "Friend_class.h"

v.. display_player(Player &p) {
      st. c.. __ p.name __ st. e..
      st. c.. __ p.health __ st. e..
      st. c.. __ p.xp __ st. e..
}

u.. s..

in. main
  
    Player hero{"Hero", 100, 35};
    display_player(hero);
    
    Other_class other;
    other.display_player(hero);
    
    Friend_class friend_class;
    friend_class.set_hero_name(hero,"SUPER HERO");
    friend_class.display_player(hero);
    
    r_ 0;
}

