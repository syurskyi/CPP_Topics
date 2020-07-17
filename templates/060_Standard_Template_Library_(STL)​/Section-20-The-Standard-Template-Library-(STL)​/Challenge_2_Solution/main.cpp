// Section 20
// 012_Challenge 2 - Solution
//  Lists

? ios..
? <list>
? st..
? <cctype>
? iom..
? <limits>

c_ Song {
    friend std::ostream &operator__(std::ostream &os, co.. Song &s);

    std::string name;
    std::string artist;
    in. rating;
pu..
    Song() = default;
    Song(std::string name, std::string artist, in. rating)
            : name{name}, artist{artist}, rating{rating} {}

    std::string get_name() co.. {
        r_ name;
    }

    std::string get_artist() co.. {
        r_ artist;
    }
    
    in. get_rating() co.. {
        r_ rating;
    }
    
    bool operator<(co.. Song &rhs) co..  {
        r_ this->name < rhs.name;
    }
    
    bool operator__(co.. Song &rhs) co..  {
        r_ this->name __ rhs.name;
    }
};

std::ostream &operator__(std::ostream &os, co.. Song &s) {
    os __ std::setw(20) __ std::left __ s.name
       __ std::setw(30) __ std::left __ s.artist
       __ std::setw(2) __ std::left __ s.rating;
       r_ os;
}

v.. display_menu
    std::c.. __ "\nF - Play First Song" __ std::e..
    std::c.. __ "N - Play Next song" __ std::e..
    std::c.. __ "P - Play Previous song" __ std::e..
    std::c.. __ "A - Add and play a new Song at current location" __ std::e..
    std::c.. __ "L - List the current playlist" __ std::e..
    std::c.. __ "===============================================" __ std::e..
    std::c.. __ "Enter a selection (Q to quit): ";
}

v.. play_current_song(co.. Song &song) {
    std::c.. __ "Playing: " __ std::e..
    std::c.. __ song __ std::e..
}

v.. display_playlist(co.. std::list<Song> &playlist, co.. Song &current_song) {
    ___ (co.. Song &song: playlist) {
        std::c.. __ song __ std::e..
    }
    std::c.. __ "Current song: " __ std::e..
    std::c.. __ current_song __ std::e..
}

in. main

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };

    std::list<Song>::iterator current_song = playlist.begin();
    display_playlist(playlist, *current_song);
    
    ch.. selection{};
    do {
        display_menu();
        std::ci. __ selection;
        selection = std::toupper(selection);
        __ (selection __ 'F') {
            std::c.. __ "Playing first song" __ std::e..
            current_song = playlist.begin();
            play_current_song(*current_song);
        }
        ____ __ (selection __ 'N') {
            std::c.. __ "Playing next song" __ std::e..
            current_song++;
            __ (current_song __ playlist.end()) {
                std::c.. __ "Wrapping to start of playlist" __ std::e..
                current_song = playlist.begin();
            }
            play_current_song(*current_song);
        }
        ____ __ (selection __ 'P') {
            std::c.. __ "Playing previous song" __ std::e..
            __ (current_song __ playlist.begin()) {
                std::c.. __ "Wrapping to end of playlist" __ std::e..
                current_song = playlist.end();
            }
            current_song--;
            play_current_song(*current_song);
        } ____ __ (selection __ 'A') {
            std::string name, artist;
            in. rating;
            std::ci..clear();
            std::ci..ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::c.. __ "Adding and playing new song" __ std::e..
            std::c.. __ "Enter song name:";
            getline(std::ci., name);
            std::c.. __ "Enter song artist: ";
            getline(std::ci., artist);
            std::c.. __ "Enter your rating (1-5): ";
            std::ci. __ rating;
            playlist.insert(current_song, Song{name, artist, rating});
            current_song--;
            play_current_song(*current_song);
        } ____ __ (selection __ 'L') {
            std::c.. __ std::e..
            display_playlist(playlist, *current_song);            
        } ____ __ (selection __ 'Q')
            std::c.. __ "Quitting" __ std::e..
        ____
            std::c.. __ "Illegal choice, try again...";
    } w__ (selection != 'Q');

    std::c.. __ "Thanks for listening!" __ std::e..
    r_ 0;
}