? "scopedptr.h"

template< typename T >
ScopedPtr< T >::ScopedPtr(T* ptr) : ptr(ptr)
{
}

template< typename T >
ScopedPtr< T >::~ScopedPtr()
{
    delete ptr;
}

template< typename T >
T& ScopedPtr< T >::operator*()
{
    r_ *ptr;
}

template< typename T >
T* ScopedPtr< T >::operator->()
{
    r_ ptr;
}
