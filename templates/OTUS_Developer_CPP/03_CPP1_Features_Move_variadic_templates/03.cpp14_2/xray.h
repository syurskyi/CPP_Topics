#pragma once

? |i..

struct xray {
    st. string x;

    xray(co.. ch.. *x_) : x(x_)
    {
        st. cout << "ctor " << x << st. endl;
    }

    xray(co.. xray &rhs) : x(rhs.x)
    {
        st. cout << "copy ctor from " << rhs.x << " to " << x << st. endl;
    }

#ifdef MOVE

    xray(xray &&rhs) noexcept
    {
        st. cout << "move ctor from " << rhs.x << " to " << x << st. endl;
        x.swap(rhs.x);
    }

e..

    ~xray()
    {
        st. cout << "dtor " << x << st. endl;
    }
    xray &operator=(co.. xray &rhs)
    {
        st. cout << "copy assign from " << rhs.x << " to " << x << st. endl;
        return *this;
    }

#ifdef MOVE

    xray &operator=(xray &&rhs) noexcept

    {
        st. cout << "move assign from " << rhs.x << " to " << x << st. endl;
        return *this;
    }

e..
};
