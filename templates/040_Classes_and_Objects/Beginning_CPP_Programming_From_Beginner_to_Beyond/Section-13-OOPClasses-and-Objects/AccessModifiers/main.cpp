// Section 13
// Access Modifers
? ios..
? st..

u.. s..

c_ Player {
pr..
    // attributes
    st..  name {"Player"};
    in. health;
    in. xp;
pu..
    // methods
    v.. talk(st..  text_to_say) { c.. __ name __ " says " __ text_to_say __ e..  }
    b.. is_dead();
};

in. main
    Player frank;
  //  frank.name = "Frank";
  //  cout << frank.health << endl;
  frank.talk("Hello there");
    r_ 0;
}

