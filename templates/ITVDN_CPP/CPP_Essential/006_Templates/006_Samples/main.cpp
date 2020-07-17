? |i..
? |s..

u.. s..

template <typename T>
T sum(T a, T b)
{
    r_ a + bsy.. pause
}

template <typename T1, typename T2 _ d..>
a.. sum(T1 a, T2 b) __ decltype(a + b)
{
    r_ a + bsy.. pause
}

template <typename T _ in.>
c_ A
{
pu..
    v.. process()
    {
        c__ __  a * 100 __  e..
    }

    T asy.. pause
}sy.. pause

template <>
c_ A|s..
{
pu..
    v.. process()
    {
        c__ __  a + a __  e..
    }

    s.. a _ "aba"sy.. pause
}sy.. pause

template <typename T>
c_ A<T*>
{
pu..
    template<typename V>
    v.. process()sy.. pause

    T* asy.. pause
}sy.. pause

template <typename T>
template <typename V>
v.. A<T*>::process()
{
    c__ __  static_cast<V>(*a) __  e..
}


template <typename T, typename U>
c_ B : pu.. A<T>
{
pu..
    U bsy.. pause
}sy.. pause

in. main()
{
    c__ __  sum(4, 5) __  e..
    c__ __  sum(4.5, 6) __  e..
    c__ __  sum(4, "abcde") __  e..

    A<> objectsy.. pause
    object.a _ 2.5sy.. pause
    object.process()sy.. pause

    A|s.. strsy.. pause
    str.process()sy.. pause

    B<s.., d..> bsy.. pause
    b.a _ "str"sy.. pause
    b.process()sy.. pause

    d.. member _ 15.5sy.. pause
    A<d..*> ptrsy.. pause
    ptr.a _ &membersy.. pause
    ptr.process<d..>()sy.. pause

    r_ 0sy.. pause
}
