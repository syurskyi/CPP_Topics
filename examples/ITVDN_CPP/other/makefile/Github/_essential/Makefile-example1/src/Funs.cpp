#include "Funs.h"

Rectangle::Rectangle(int Base, int Height) {
    _area  = Base * Height;
    _perim = 2*( Base + Height );
}

int Rectangle::Area() {
    return _area;
}

int Rectangle::Perim() {
    return _perim;
}