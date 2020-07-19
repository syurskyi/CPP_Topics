// Section 20
// 012_Challenge 2
//  Lists

? ios..
? <list>
? st..
? cct..
? iom..
? <limits>

c_ Song {
    fr.. st. ostream &operator__(st. ostream &os, co.. Song &s);
    st. st..  name;
    st. st..  artist;
    in. rating;
pu..
    Song() = de..;
    Song(st. st..  name, st. st..  artist, in. rating)
            : name{name}, artist{artist}, rating{rating} {}
    st. st..  get_name() co.. {
        r_ name;
    }
    st. st..  get_artist() co.. {
        r_ artist;
    }
    in. get_rating() co.. {
        r_ rating;
    }
    
    b.. operator<(co.. Song &rhs) co..  {
        r_ this->name < rhs.name;
    }
    
    b.. operator__(co.. Song &rhs) co..  {
        r_ this->name __ rhs.name;
    }
};

st. ostream &operator__(st. ostream &os, co.. Song &s) {
    os __ st. setw(20) __ st. left __ s.name
       __ st. setw(30) __ st. left __ s.artist
       __ st. setw(2) __ st. left __ s.rating;
       r_ os;
}

v.. display_menu
    st. c.. __ "\nF - Play First Song" __ st. e..
    st. c.. __ "N - Play Next song" __ st. e..
    st. c.. __ "P - Play Previous song" __ st. e..
    st. c.. __ "A - Add and play a new Song at current location" __ st. e..
    st. c.. __ "L - List the current playlist" __ st. e..
    st. c.. __ "===============================================" __ st. e..
    st. c.. __ "Enter a selection (Q to quit): ";
}

v.. play_current_song(co.. Song &song) {
    // 007_This function should display
    // Playing: followed by the song that is playing
   
    st. c.. __ "You implement this function"__ st. e..
}

v.. display_playlist(co.. st. list<Song> &playlist, co.. Song &current_song) {
    // 007_This function should display the current playlist
    // and then the current song playing.
    
    st. c.. __ "You implement this function" __ st. e..
}

in. main

    st. list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    st. list<Song>::iterator current_song = playlist.begin();
    
    st. c.. __ "To be implemented" __ st. e..
    // Your program logic goes here

    st. c.. __ "Thanks for listening!" __ st. e..
    r_ 0;
}