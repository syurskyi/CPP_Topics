#pragma once

// boost: scoped_ptr

template <typename T>
n.. ScopedPtr
{
p..
    ex__ ScopedPtr(T* ptr);
    ~ScopedPtr();
    T& operator*();
    T* operator->();

pr..
    T* ptr;
};
