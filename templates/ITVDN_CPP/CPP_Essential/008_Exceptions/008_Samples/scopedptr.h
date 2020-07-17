#pragma once

// boost: scoped_ptr

template <typename T>
n.. ScopedPtr
{
p..
    explicit ScopedPtr(T* ptr);
    ~ScopedPtr();
    T& operator*();
    T* operator->();

private:
    T* ptr;
};
