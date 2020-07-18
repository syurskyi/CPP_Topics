// Section 13
// Move Constructor 
? ios..
? ve..

u.. s..

c_ Move {
pr..
    in. *data;
pu..
    v.. set_data_value(in. d) { *data = d; }
    in. get_data_value r_ *data; }
    // Constructor
    Move(in. d);
    // Copy Constructor
    Move(co.. Move &source);
    // Move Constructor
    Move(Move &&source) noexcept;
    // Destructor
    ~Move();
};

 Move::Move(in. d)  {
    data = ne. in.;
    *data = d;
    c.. __ "Constructor for: " __ d __ e..
}

// Copy ctor
Move::Move(co.. Move &source)
    : Move {*source.data} {
        c.. __ "Copy constructor  - deep copy for: " __ *data __ e..
}

//Move ctor
Move::Move(Move &&source) noexcept 
    : data {source.data} {
        source.data = n_p_;
        c.. __ "Move constructor - moving resource: " __ *data __ e..
}

Move::~Move
    __ (data != n_p_) {
        c.. __ "Destructor freeing data for: " __ *data __ e..
    } ____ {
        c.. __ "Destructor freeing data for nullptr" __ e..
    }
    de... data;
}

in. main
    ve..<Move> vec;

    vec.push_back(Move{10});

    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
     vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});


    r_ 0;
}

