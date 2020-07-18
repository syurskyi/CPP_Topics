// Section 20
// 012_Challenge 2 - Solution
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
    Song() = default;
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
    st. c.. __ "Playing: " __ st. e..
    st. c.. __ song __ st. e..
}

v.. display_playlist(co.. st. list<Song> &playlist, co.. Song &current_song) {
    ___ (co.. Song &song: playlist) {
        st. c.. __ song __ st. e..
    }
    st. c.. __ "Current song: " __ st. e..
    st. c.. __ current_song __ st. e..
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
    display_playlist(playlist, *current_song);
    
    ch.. selection{};
    do {
        display_menu();
        st. ci. __ selection;
        selection = st. toupper(selection);
        __ (selection __ 'F') {
            st. c.. __ "Playing first song" __ st. e..
            current_song = playlist.begin();
            play_current_song(*current_song);
        }
        ____ __ (selection __ 'N') {
            st. c.. __ "Playing next song" __ st. e..
            current_song++;
            __ (current_song __ playlist.end()) {
                st. c.. __ "Wrapping to start of playlist" __ st. e..
                current_song = playlist.begin();
            }
            play_current_song(*current_song);
        }
        ____ __ (selection __ 'P') {
            st. c.. __ "Playing previous song" __ st. e..
            __ (current_song __ playlist.begin()) {
                st. c.. __ "Wrapping to end of playlist" __ st. e..
                current_song = playlist.end();
            }
            current_song--;
            play_current_song(*current_song);
        } ____ __ (selection __ 'A') {
            st. st..  name, artist;
            in. rating;
            st. ci..clear();
            st. ci..ignore(st. numeric_limits<st. streamsize>::max(),'\n');
            st. c.. __ "Adding and playing new song" __ st. e..
            st. c.. __ "Enter song name:";
            getline(st. ci., name);
            st. c.. __ "Enter song artist: ";
            getline(st. ci., artist);
            st. c.. __ "Enter your rating (1-5): ";
            st. ci. __ rating;
            playlist.insert(current_song, Song{name, artist, rating});
            current_song--;
            play_current_song(*current_song);
        } ____ __ (selection __ 'L') {
            st. c.. __ st. e..
            display_playlist(playlist, *current_song);            
        } ____ __ (selection __ 'Q')
            st. c.. __ "Quitting" __ st. e..
        ____
            st. c.. __ "Illegal choice, try again...";
    } w__ (selection != 'Q');

    st. c.. __ "Thanks for listening!" __ st. e..
    r_ 0;
}