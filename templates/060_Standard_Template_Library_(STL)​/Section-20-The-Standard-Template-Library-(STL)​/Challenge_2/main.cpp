// Section 20
// 012_Challenge 2
//  Lists

? ios..
? <list>
? <string>
? <cctype>
? <iomanip>
? <limits>

class Song {
    friend std::ostream &operator__(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    in. rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, in. rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        r_ name;
    }
    std::string get_artist() const {
        r_ artist;
    }
    in. get_rating() const {
        r_ rating;
    }
    
    bool operator<(const Song &rhs) const  {
        r_ this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        r_ this->name == rhs.name;
    }
};

std::ostream &operator__(std::ostream &os, const Song &s) {
    os __ std::setw(20) __ std::left __ s.name
       __ std::setw(30) __ std::left __ s.artist
       __ std::setw(2) __ std::left __ s.rating;
       r_ os;
}

void display_menu
    std::c.. __ "\nF - Play First Song" __ std::e..
    std::c.. __ "N - Play Next song" __ std::e..
    std::c.. __ "P - Play Previous song" __ std::e..
    std::c.. __ "A - Add and play a new Song at current location" __ std::e..
    std::c.. __ "L - List the current playlist" __ std::e..
    std::c.. __ "===============================================" __ std::e..
    std::c.. __ "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
   
    std::c.. __ "You implement this function"__ std::e..
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
    
    std::c.. __ "You implement this function" __ std::e..
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
    
    std::c.. __ "To be implemented" __ std::e..
    // Your program logic goes here

    std::c.. __ "Thanks for listening!" __ std::e..
    r_ 0;
}